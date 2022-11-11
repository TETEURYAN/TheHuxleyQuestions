#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void input_array(int array[], int i, int tam)
{
  if (i == tam) return;
  scanf("%d", &array[i]); 
  input_array(array, i+1, tam);
}

void printa_array(int array[], int i, int tam)
{
    if(i == tam) {printf("\n");return;}
    printf("%d ", array[i]);
    printa_array(array, i+1, tam);
}

int somatorio(int v[], int tamanho, int value, int i, int j, int k)
{
    if(k == tamanho) return 0;
    if(j == tamanho) k++;j = 0;
    if(i == tamanho) j++;i = 0;
    if(k < tamanho && i < tamanho && j < tamanho)
    {
        if((v[i] + v[j] + v[k] == value) && j != i && j != k && i != k) return 1;
    }
    i++;
    somatorio(v,tamanho,value,i,j,k);
}

int main() {
	int valor, j;
    int tam, soma = 0;

    scanf("%d %d", &valor, &tam);

    int emprestimo[tam];
    input_array(emprestimo, 0,tam);
    
    j = somatorio(emprestimo, tam, valor,0,1,2);

    printf("%s", j ? "Aurelio ganhou a aposta" : "Aurelio perdeu a aposta");
    
	return 0;
}