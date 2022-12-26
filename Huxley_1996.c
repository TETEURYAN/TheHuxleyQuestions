#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void read_matriz(int linha, int coluna, char matrixOne[][coluna])
{
    for( int i = 0; i < linha; i++)
        for(int j = 0; j < coluna; j++)
          scanf("%c", &matrixOne[i][j]);
}

int rule_one(int linha, int coluna, char matriz[][coluna])
{
    int i, j, contador = 0;
    for( i = 0; i < linha; i++)
    {
        for(j = 0; j < coluna; j++)
        {
            if(!(j%2))
            {
                if(matriz[i][j] == 'g') contador++;
            }
            if(j%2 != 0)
            {
                if(matriz[i][j] == 'p') contador++;
            }
        }    
    }   
    printf("%d\n", contador);
    return (contador>0) ? 1 : 0;       
}

bool rule_two(int linha, int coluna, char matriz[][coluna])
{
    int suspeito;
    for(int i = 0; i < linha; i++)
        for(int j = 0; j < coluna; j++)
        {
            suspeito += (matriz[i][j] == 's') ? 1 : 0;
            if(suspeito > 1) return true;
        }
        suspeito = 0;
    return false;       
}

bool rule_three(int linha, int coluna, char matriz[][coluna])
{
    int suspeito;
    for(int i = 0; i < linha; i++)
        for(int j = coluna; j > 0; j--)
        {
            if(matriz[i][j] == 'i') return true;
        }
    
    for(int i = 0; i < linha; i++)
    {
        if(matriz[i][i] == 'i') return true;
    }    
       
    return false;       
}

bool rule_four(int linha, int coluna, char matriz[][coluna])
{
    int suspeitos = 0; int guardas = 0;
    for(int i = 0; i < linha; i++)
    {
        if(matriz[i][0] == 's' || matriz[i][0] == 'i') suspeitos++;
        if(matriz[i][0] == 'g' ) guardas++;
        
        if(matriz[i][coluna-1] == 's' || matriz[i][coluna-1] == 'i') suspeitos++;
        if(matriz[i][coluna-1] == 'g' ) guardas++;
    }
    
    for(int i = 0; i < coluna; i++)
    {
        if(matriz[0][i] == 's' || matriz[0][0] == 'i') suspeitos++;
        if(matriz[0][i] == 'g' ) guardas++;
        
        if(matriz[linha-1][i] == 's' || matriz[linha-1][i] == 'i') suspeitos++;
        if(matriz[linha-1][i] == 'g' ) guardas++;
    }
    
    return (suspeitos > guardas) ? true : false;       
}

void solve( int linha, int coluna, char matriz[][coluna])
{
    if( !rule_one && !rule_two && !rule_three && !rule_four) printf("AZUL");
    else 
    {
        if(rule_one)printf("BRANCO\n");
        else printf("TRANSPARENTE\n");
        
        if(rule_two)printf("AMARELO\n");
        else printf("TRANSPARENTE\n");
        
        if(rule_three)printf("LARANJA\n");
        else printf("TRANSPARENTE\n");
        
        if(rule_four)printf("VERMELHO\n");
        else printf("TRANSPARENTE\n");
    }
    return;
}

int main() 
{
    int line, column;
    scanf("%d", &line, &column);
    
    char tabble[line][column];
    read_matriz(line, column, tabble);
    
    solve(line, column, tabble);
    
	return 0;
}
