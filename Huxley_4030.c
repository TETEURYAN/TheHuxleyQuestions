#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//4030 - Peça no tabuleiro
//https://thehuxley.com/problem/4030

void input_matriz (int i, int linha, int coluna, int matrix[][coluna])
{
    if (i < linha * coluna)
    {
        scanf("%d", &matrix[i / coluna][i % coluna]);
        input_matriz(i + 1, linha, coluna, matrix);
    }
    return;
}

int percorre_tab(char movimento[],int mov,int linha, int coluna, int tabuleiro[][coluna], int i, int j)
{
    int l = 0,ll = 0, c = 0;
    
    for( c = 0; c <= mov; c ++)
    {
        
        if(l == i && ll == j || ll == j && l == i) break;
        else {
        if(movimento[c] == 'C')
        {
            if(!tabuleiro[l-1][ll]) l--;
            else tabuleiro[l-1][ll] -= 1;
        }
        
        if(movimento[c] == 'B')
        {
            if(!tabuleiro[l+1][ll]) l++;
            else tabuleiro[l+1][ll] -= 1;
        }
        if(movimento[c] == 'D')
        {
            if(!tabuleiro[l][ll+1]) ll++;
            else tabuleiro[l][ll+1] -= 1;
        }
        if(movimento[c] == 'E')
        {
            if(!tabuleiro[l][ll-1]) ll--;
            else tabuleiro[l][ll-1] -= 1;
        }
        }
    }
        if(c == mov+1) printf("Nao cheguei");
        else printf("Cheguei com %d movimentos\n", c);
        
}

int main() {
    int linha, coluna,i;
    scanf("%d%d", &linha, &coluna);
    
    int tabuleiro[linha][coluna];
    input_matriz(0,linha, coluna,tabuleiro);
    
    int mov;
    scanf("%d", &mov);
    char movimento[mov];
    
    for(i = 0; i < mov; i++)scanf(" %c", &movimento[i]);
    
    int k, j;
    
    scanf("%d %d", &k, &j);
    
    percorre_tab(movimento,mov,linha,coluna,tabuleiro, k, j);
    
	return 0;
}
