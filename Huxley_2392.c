#include <stdio.h>

//2392 - A Grande Estreia

void swap(int *X, int *Y)
{
	if(*X < *Y) *Y = *X;
}

void input_matrix(int n, int matrix[2][n])
{
	for(int i = 0; i < 2; i++)
		for(int j = 0; j < n; j++)
			scanf("%d", &matrix[i][j]);
}

void inverse(int n, int matrix[2][n] )
{
	for(int i = 0; i < 2; i++)
		for(int j = 0; j < n; j++)
		    matrix[i][j] = (matrix[i][j] == 0) ? 0 : 1;
		
}

void solve(int tam, int matrix[2][tam])
{
	int count = 0, pass = 99999999;

	for(int i = 0; i < tam; i++)
	{
		count += matrix[0][i];
	} 
		
	swap(&count, &pass); count++;

	for(int i = 0; i < tam; i++)
	{
		count -= matrix[0][i];
		count += matrix[1][i];
		swap(&count, &pass);
	}

	count = 0;

	for(int i = 0; i < tam; i++) 
	{
		count += matrix[1][i];
	}

	swap(&count, &pass);
	count++;

	for(int i = 0; i < tam; i++)
	{
		count -= matrix[1][i];
		count += matrix[0][i];
		swap(&count, &pass);
	}

	printf("%d\t", pass);
 
}

int main()
{
	
	int tam;
	scanf("%d", &tam);
	
	int matrix[2][tam];
	input_matrix(tam, matrix);
	inverse(tam, matrix);


	solve(tam, matrix);

	return 0;
}
