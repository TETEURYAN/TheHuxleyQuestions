#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//4031 - Duelo das diagonais
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

int soma_diagonal_principal (int i, int n, int matrix[][n])
{
	if (i < n)
	{
		return matrix[i][i] + soma_diagonal_principal (i + 1, n, matrix);
	}
	
	return 0;
}

int somas_diagonal_secundaria (int i, int j, int n, int matrix[][n])
{
	if (i < n)
	{   
	    return matrix[i][j] + somas_diagonal_secundaria (i + 1,j - 1, n, matrix);
	}
	return 0;
}

int soma_diagonal_secundaria (int i, int n, int matrix[][n])
{
	int soma;
	for (i = n-1; i >=0; i--) 
	{
        soma += matrix[i][(n-1)-i];
    }

	return soma;
}

void entrada( int num)
{
	if(num > 0)
	{
		int matrix1[5][5], matrix2[5][5], somap1, somap2;
		char p1[50], p2[50];

		scanf("%s",p1);
		input_matriz(0,5,5,matrix1);
		somap1 = soma_diagonal_principal(0,5,matrix1) + soma_diagonal_secundaria(0,5,matrix1);

		scanf("%s",p2);
		input_matriz(0,5,5,matrix2);
		somap2 = soma_diagonal_principal(0,5,matrix2) + soma_diagonal_secundaria(0,5,matrix2);
		
		if(somap1 > somap2)printf("%s venceu com valor %d\n", p1, somap1);
		else if( somap1 == somap2 ) printf("Empataram com valor %d\n", somap1);
		else printf("%s venceu com valor %d\n", p2, somap2);

		entrada(num-1);
	}

	return;
}

int main() 
{
    
	int num;

	scanf("%d", &num);
	getchar();

	entrada(num);
	return 0;

}
