#include<stdio.h>
#include <stdbool.h>

//2621 - Chandler Vs. Phoebe
////https://www.thehuxley.com/problem/2621?locale=pt_BR

void input_matrix (int i, int n, int matrix[][n], int aux[][n])
{
	if (i < n * n)
	{
		scanf("%d", &matrix[i / n][i % n]);
		aux[i / n][i % n] = matrix[i / n][i % n];
		input_matrix(i + 1, n, matrix,aux);
	}
	return;
}
void percorre_matrix(int i, int tam, int matrix[][tam])
{
    if(i < tam*tam)
    {
        if(0 > matrix[i / tam][i % tam] ) 
        {
            matrix[i / tam][i % tam] *= 2;
        }
        percorre_matrix(++i, tam, matrix);
    }
    return;
}

void troca_matrix(int tam, int linha, int coluna, int matrix[][tam], int aux[][tam])
{
    if( linha < tam)
    {
        if(coluna < tam)
        {
            matrix[linha][coluna] = aux[coluna][linha];
            troca_matrix(tam, linha, ++coluna, matrix, aux);
        }
        coluna = 0;
        troca_matrix(tam, ++linha, coluna, matrix, aux);
    }
    return;
}

void printa_matrix (int linha, int coluna, int tamanho,int array[][tamanho])
{
	
	if (linha < tamanho)
	{
		if (coluna < tamanho)
		{
			printf("%d", array[linha ][coluna]);
			printf("%c", coluna != tamanho-1 ? ' ' : '\n');
			printa_matrix(linha, ++coluna,tamanho, array);
			return;
		}
		coluna = 0;
		printa_matrix(++linha, coluna, tamanho, array);
	}
    return;
}

int main()
{
    int tam;
    scanf("%d", &tam);

    int matrix[tam][tam];
    int aux[tam][tam];

    input_matrix(0,tam,matrix,aux);
    percorre_matrix(0,tam,aux);
    troca_matrix(tam,0,1,matrix,aux);
    printa_matrix(0,0,tam,matrix);
    

}