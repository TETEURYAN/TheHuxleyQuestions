#include <stdio.h>

//313 - Line of two-dimensional array
//https://thehuxley.com/problem/313

void input_array (int j, int i, int n, int matrix[][n])
{
	if (i < n)
	{
		scanf("%d", &matrix[j][i]);
		input_array(j, i + 1, n, matrix);
	}
}

void input_matriz (int j, int n, int matrix[][n])
{
	if (j < n)
	{
		input_array(j, 0, n, matrix);
		input_matriz(j + 1, n, matrix);
	}
}

double soma(int i, int j, int tam, int mat1[12][12])
{
    if (j < tam)
    {
        return mat1[i][j] + soma(i, j+1, tam, mat1);
    }
    return 0;
}
int main()
{
    int mat1[12][12];
    int linha; char operacao;
    scanf("%d %c", &linha, &operacao);
    input_matriz(0,12,mat1);
    
    double n = soma(linha,0,12,mat1);
    
    printf("%.1lf\n", operacao == 'S' ? n : n/12);
    
}
