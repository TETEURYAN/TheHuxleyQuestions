#include <stdio.h>
//1279 - Soma divina
void input_matriz (int i, int n, int matrix[][n])
{
	if (i < (n * n))
	{
		scanf("%d", &matrix[i / n][i % n]);
		input_matriz (i + 1, n, matrix);
	}
}

void soma_diagonal (int i, int n, int matrix1[][n], int matrix2[][n], int sum[][n])
{
	if (i < (n * n))
	{
		sum[i / n][i % n] = matrix1[i / n][i % n] + matrix2 [i / n][i % n];
		soma_diagonal(i + 1, n, matrix1, matrix2, sum);
	}
}

void printa_matriz(int i, int tam , int matrix[tam][tam])
{
	if (i < (tam * tam ))
	{
		printf("%d\n", matrix[i / tam ][i % tam ]);
		printa_matriz (i + 1, tam , matrix);
	}
}

int main ()
{
	int tam;
	scanf("%d", &tam);

	if (tam > 0)
	{
		int matrix1[tam][tam];
		int matrix2[tam][tam];
		int sum[tam][tam];

		input_matriz(0, tam, matrix1);
		input_matriz(0, tam, matrix2);
		
		soma_diagonal(0, tam, matrix1, matrix2, sum);
		
		printa_matriz(0, tam, sum);
	}
	else
	{
		printf("Vazia\n");
	}

	return 0;
}
