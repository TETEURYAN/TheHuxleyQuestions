#include <stdio.h>
#include <string.h>

//479 - Colisão no Mapa
//https://thehuxley.com/problem/479

void input_array(int i, int tam, char array[])
{
	if (i < tam)
	{
		array[i] = getchar();
		if (array[i] != '\n') input_array(i + 1, tam, array);
		else input_array(i, tam, array);
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

int percorre_tab(char movimento[],int tamanho_caracteres,int linha, int coluna, int tabuleiro[][coluna], int nova_linha, int nova_coluna, int contador)
{
    
    
    if( contador < tamanho_caracteres)
    {
        if(movimento[contador] == 'C')
        {
            if (nova_linha - 1 != -1)
            {
                if(tabuleiro[nova_linha-1][nova_coluna] == 1)
                {
                    nova_linha--;
                } 
            }
        }
        
        if(movimento[contador] == 'B')
        {   
            if (nova_linha + 1 != linha)
            {
                if(tabuleiro[nova_linha+1][nova_coluna] == 1)
                {
                    nova_linha++;
                } 
            }
        }
        if(movimento[contador] == 'D')
        {
            if (nova_coluna + 1 != coluna)
            {
                if(tabuleiro[nova_linha][nova_coluna+1] == 1)
                {
                    nova_coluna++;
                } 
            }
        }
        if(movimento[contador] == 'E')
        {
            if (nova_coluna - 1 != -1)
            {
                if(tabuleiro[nova_linha][nova_coluna-1] == 1)
                {
                    nova_coluna--;
                } 
            }
        }
        
        percorre_tab(movimento, tamanho_caracteres, linha, coluna, tabuleiro, nova_linha, nova_coluna, ++contador);
    }
        
        else
        {
            printf("(%d,%d)", nova_linha, nova_coluna); 
            return;
        }    
}

int main() {
    int linha, coluna;
    scanf("%d%d", &linha, &coluna);
    
    int tabuleiro[linha][coluna];
    input_matriz(0,linha, coluna,tabuleiro);
    
    int tamanho_caracteres;
    scanf("%d", &tamanho_caracteres);
    char movimento[tamanho_caracteres];
    
    input_array(0, tamanho_caracteres, movimento);
    
    int linha_escolhida, coluna_escolhida;
    
    scanf("%d %d", &linha_escolhida, &coluna_escolhida);
    
    percorre_tab(movimento,tamanho_caracteres,linha,coluna,tabuleiro, linha_escolhida, coluna_escolhida,0);
    
	return 0;
}
