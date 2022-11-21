#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//4030 - Peça no tabuleiro
//https://thehuxley.com/problem/4030

void input_char(int i, int tam, char array[])
{
	if (i < tam)
	{
		array[i] = getchar();
		if (array[i] != '\n') 
		{
		    input_char(i + 1, tam, array);
		}    
		else 
		{
		    input_char(i, tam, array);
		}   
	}
}

void input_matriz (int i, int linha, int coluna, int matrix[][coluna])
{
    if (i < linha * coluna)
    {
        scanf("%d", &matrix[i / coluna][i % coluna]);
        input_matriz(i + 1, linha, coluna, matrix);
    }
    return;
}

int percorre_tabuleiro(char movimento[],int mov,int linha, int coluna, int tabuleiro[][coluna], int linha_escolhida, int coluna_escolhida, int nova_linha, int nova_coluna, int contador)
{
    
    
    if(contador < mov+1)
    {
        if(nova_linha == linha_escolhida && nova_coluna == coluna_escolhida || nova_coluna == coluna_escolhida && nova_linha == linha_escolhida) 
        {
            printf("Cheguei com %d movimentos\n", contador); 
            return;
        }
       
        else
        {
            
            if(movimento[contador] == 'C')
            {
                if(!tabuleiro[nova_linha-1][nova_coluna])
                {
                    nova_linha--;
                }
                else 
                {
                    tabuleiro[nova_linha-1][nova_coluna] -= 1;
                }
            }
            
            if(movimento[contador] == 'B')
            {
                if(!tabuleiro[nova_linha+1][nova_coluna])
                {
                    nova_linha++;
                }
                else
                {
                    tabuleiro[nova_linha+1][nova_coluna] -= 1;
                }
            }
        
            if(movimento[contador] == 'D')
            {
                if(!tabuleiro[nova_linha][nova_coluna+1])
                {
                    nova_coluna++;
                }
                else
                {
                    tabuleiro[nova_linha][nova_coluna+1] -= 1;
                }
            }
            
            if(movimento[contador] == 'E')
            {
                if(!tabuleiro[nova_linha][nova_coluna-1])
                {
                    nova_coluna--;
                }
                else 
                {
                    tabuleiro[nova_linha][nova_coluna-1] -= 1;
                }
            }
        }
        
        percorre_tabuleiro(movimento, mov, linha, coluna, tabuleiro, linha_escolhida, coluna_escolhida, nova_linha, nova_coluna,++contador);
    }
        else
        {
            printf("Nao cheguei");
        }    
    
}

int main() {
    int linha, coluna;
    scanf("%d%d", &linha, &coluna);
    
    int tabuleiro[linha][coluna];
    input_matriz(0,linha, coluna,tabuleiro);
    
    int mov;
    scanf("%d", &mov);
    char movimento[mov];
    
    input_char(0,mov,movimento);
    
    int linha_escolhida, coluna_escolhida;
    
    scanf("%d %d", &linha_escolhida, &coluna_escolhida);
    
    percorre_tabuleiro(movimento, mov, linha, coluna, tabuleiro, linha_escolhida, coluna_escolhida, 0, 0, 0);
    
	return 0;
}
