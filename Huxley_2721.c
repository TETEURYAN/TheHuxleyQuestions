#include<stdio.h>
#include <stdbool.h>

//2721 - Two dimensional Array
////https://www.thehuxley.com/problem/2721?locale=pt_BR

void input_matrix (int i, int linha, int coluna, int matrix[][coluna])
{
	if (i < linha * coluna)
	{
		scanf("%d", &matrix[i / coluna][i % coluna]);
		input_matrix(i + 1, linha, coluna, matrix);
	}
	return;
}


void print_matrix(int i, int n, int m, int matrix[][m], int matrix2[][m])
{
    if (i < n * m)
    {
            printf("%d", matrix[i / m][i % m] + matrix2[i / m][i % m]);
            printf("%c", (i % m != m -1) ? ' ' : '\n');
            print_matrix(i + 1, n, m, matrix, matrix2);
    }
}
int main()
{
    
    int linha, coluna;
    
    scanf("%d%d", &linha, &coluna);
    
    int matrix1[linha][coluna];
    int matrix2[linha][coluna];

    input_matrix(0,linha,coluna,matrix1);
    input_matrix(0,linha,coluna,matrix2);
    
    print_matrix(0,linha,coluna,matrix1, matrix2);
  
    return 0;
}