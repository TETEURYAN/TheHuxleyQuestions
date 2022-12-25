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

bool rule_one(int linha, int coluna, char matriz[][coluna])
{
    int i, j;
    for( i = 0; i < linha; i++)
    {
        for(j = 0; j < coluna; j++)
        {
            if(!(i%2))
            {
                if(matriz[i][j] != 'g') return false;
            }
            if(i%2 != 0)
            {
                if(matriz[i][j] != 'p') return false;
            }
        }    
    }        
    return true;       
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
    int suspeito = 0; int guardas = 0;
    for(int i = 0; i < linha; i++)
        for(int j = 0; j > coluna; j++)
        {
            if()
            if(matriz[i][j] == 'i' || matriz[i][j] == 's' ) suspeitos++; 
            if(matriz[i][j] == 'g' ) guardas++; 
        }
    
    
       
    return (guardas > suspeitos);       
}


void solve( int linha, int coluna, char matriz[][coluna])
{
    
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
