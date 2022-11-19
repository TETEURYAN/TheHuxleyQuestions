#include <stdio.h>
#include <string.h>
#include <math.h>

//2131 - Voting matrix
//https://www.thehuxley.com/problem/2131

void input_matriz (int i, int linha, int coluna, int matrix[][coluna])
{
    if (i < linha * coluna)
    {
        scanf("%d", &matrix[i / coluna][i % coluna]);
        input_matriz(i + 1, linha, coluna, matrix);
    }
    return;
}

int conta_votos (int i, int coluna, int linhas, int coluna_original, int votacao[][coluna_original])
{
    if (i < linhas)
    {
        if (votacao[i][coluna])
        {
            return 1 + conta_votos (i + 1, coluna, linhas, coluna_original, votacao);
        }
        return conta_votos (i + 1, coluna, linhas, coluna_original, votacao);
    }
    
    return 0;
}

void resultado(int linhas, int colunas, int matrix[][colunas], int i)
{
    if( i < colunas)
    {
        int votos = conta_votos(0, i, linhas, colunas, matrix);
        printf("Princesa %d: %d voto(s)\n", i + 1, votos);
        resultado (linhas, colunas, matrix, i+1);
    }
    return;
}

int main() {
    
    int linhas, colunas;
    
    scanf("%d%d", &colunas, &linhas);
    
    int votacao[linhas][colunas];
    
    input_matriz(0,colunas, linhas, votacao);
    resultado(linhas, colunas,votacao, 0);
    
	return 0;
}
