#include <stdio.h>

//4038 - Matriz dentro de outra matriz?

void read_matriz(int linha, int coluna, int matrixOne[][coluna])
{
    for(int i = 0; i < linha; i++)
        for(int j = 0; j < coluna; j++)
          scanf("%d", &matrixOne[i][j]);
}

void solve(int *repeat, int tam_second_matriz, int lineOne, int columnOne, int lineTwo, int columnTwo, int matrixOne[][columnOne], int matrixTwo[][columnTwo])
{
 
  for(int i = 0; i < lineOne; i++)
    for(int j = 0; j < columnOne; j++)
    {
      int a = 0, b = 0, equidade = 0; // i e j sao indices da primeira matrix, a e b sao a da segunda matrix
      if(matrixOne[i][j] == matrixTwo[a][b]) //quando o primeiro indice da primeira matrix eh igual ao da segunda ele expande e procura o restante
      {
        for(int l = i; a < lineTwo; l++, a++) // laço para analisar a igualdade em cada linha
        {
          if(l >= lineOne) break; //limite de linha
          
          for(int c = j, b = 0; b < columnTwo; c++, b++){
            if(c >= columnOne) break; //limite de coluna

            if(matrixOne[l][c] == matrixTwo[a][b]) equidade++; //a variavel equidade sempre sera somada se o termo for igual
          }
        }
        if(equidade == tam_second_matriz) *repeat += 1; // Assim, a matrix so sera igual se a variavel equidade for igual para todos os elementos da matrix
      }
    }
  
}
int main(void) {
    int lineOne, columnOne;
    scanf("%d %d", &lineOne, &columnOne);
    int matrixOne[lineOne][columnOne];
    read_matriz(lineOne,columnOne,matrixOne);

    int lineTwo, columnTwo, repeat = 0;
    scanf("%d %d", &lineTwo, &columnTwo);
    int matrixTwo[lineTwo][columnTwo], tam_second_matriz = lineTwo*columnTwo;
    read_matriz(lineOne,columnOne,matrixTwo);
   
    solve(&repeat, tam_second_matriz, lineOne, columnOne, lineTwo, columnTwo, matrixOne, matrixTwo);
    
    printf("%d", repeat);
   
    return 0;
}
