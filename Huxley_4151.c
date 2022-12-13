#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//4151 - The Paffocan Scape
//https://thehuxley.com/problem/4151

void addSpaceInTabble (int i, int linha, int coluna, char matrix[][coluna])
{
	if (i < linha * coluna)
	{
		matrix[i / coluna][i % coluna] =  'o';
		addSpaceInTabble(i + 1, linha, coluna, matrix);
	}
	return;
}

void read_nickname(char nickname[], int i) 
{
    char c = getchar();
    if(c == '\n') nickname[i] = '\0';
    else 
    {
        nickname[i] = c;
        read_nickname(nickname, i + 1);
    }   
}

void printa_matrix (int linha, int coluna, int tamanho,char array[][tamanho])
{
	
	if (linha < tamanho)
	{
		if (coluna < tamanho)
		{
			printf("%c", array[linha ][coluna]);
		    if(coluna == tamanho-1) printf(" ");
			printf("%c", coluna != tamanho-1 ? ' ' : '\n');
			printa_matrix(linha, ++coluna,tamanho, array);
			return;
		}
		coluna = 0;
		printa_matrix(++linha, coluna, tamanho, array);
	}
    return;
}
void descrip(char nickname[], int crip, int i)
{
    if(nickname[i] != '\0')
    {
        if(nickname[i] != ' ')
        {
            if((nickname[i] - crip) < 'a' && nickname[i] >= 'a' )
            {
                nickname[i] -= crip;
                nickname[i] += 26;
            }
            else if((nickname[i] - crip) < 'A')
            {
                nickname[i] -= crip;
                nickname[i] += 26;
            }
            else
            {
                nickname[i] -= crip;
            }
        }    
        descrip(nickname, crip, ++i);
    }
}

void inverse(int n, char tabble[][12])
{
    if(n > 0)
    {
        int crip;
        scanf("%d ", &crip);
        
        char name[50];
        read_nickname(name,0);
        
        descrip(name, crip, 0);
        printf("%s\n", name);
        
        int x,y;
        scanf("%d%d", &x, &y);
        tabble[x - 1][y - 1] = 'x';
        
        inverse(--n, tabble);
    }
}
int main() 
{
    int n;
    
    char tabble[12][12];
    addSpaceInTabble(0,12,12,tabble);
    
    scanf("%d", &n);
    inverse(n, tabble);
    
    printa_matrix(0,0,12, tabble);
    
    
	return 0;
}
