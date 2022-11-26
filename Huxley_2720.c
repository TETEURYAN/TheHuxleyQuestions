#include<stdio.h>
#include <stdbool.h>

//2720 - Two dimensional Array
////https://www.thehuxley.com/problem/2720?locale=pt_BR

void input_matrix (int i, int n, int matrix[][n])
{
	if (i < n * n)
	{
		scanf("%d", &matrix[i / n][i % n]);
		input_matrix(i + 1, n, matrix);
	}
	return;
}


void printa_matrix (int linha, int coluna, int tamanho,int array[][tamanho], int array2[][tamanho])
{
	
	if (linha < tamanho)
	{
		if (coluna < tamanho)
		{
			printf("%d", array[linha ][coluna] + array2[linha][coluna]);
			printf("%c", coluna != tamanho-1 ? ' ' : '\n');
			printa_matrix(linha, ++coluna,tamanho, array, array2);
			return;
		}
		coluna = 0;
		printa_matrix(++linha, coluna, tamanho, array, array2);
	}
    return;
}


int main()
{
    int tam = 6;
    

    int matrix1[tam][tam];
    int matrix2[tam][tam];

    input_matrix(0,tam,matrix1);
    input_matrix(0,tam,matrix2);

    printa_matrix(0, 0, 6, matrix1, matrix2);
  
    return 0;
}