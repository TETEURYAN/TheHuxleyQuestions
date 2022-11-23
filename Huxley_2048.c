#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//2048 - Apostas na Mega Sena
//https://www.thehuxley.com/problem/2048

void input_array (int i, int array[])
{
	if (i < 6)
	{
		scanf("%d", &array[i]);
		input_array(i + 1, array);
	}
}

void input_matrix (int i, int j, int tam, char c, int matrix[][10], int aux[])
{
	if (i < tam)
	{
		if (j < 10 && c == ',')
		{
			scanf("%d%c", &matrix[i][j], &c);
			return input_matrix(i, j + 1, tam, c, matrix, aux);
		}
		
		aux[i] = j;
		return input_matrix(i + 1, 0, tam, ',', matrix, aux);
	}
}


int percorre_sorteio(int i, int j, int auxiliar, int matrix[][10], int sorteado)
{
	if (j < auxiliar)
	{
		return (matrix[i][j] == sorteado) ? 1 : percorre_sorteio (i, j + 1, auxiliar, matrix, sorteado);
	}
	
	return 0;
}

int quantidade(int i, int j, int tamanho, int gabarito[], int matrix[][10], int aux[])
{
	if (i < tamanho)
	{
		if (j < 6)
		{
			return (percorre_sorteio(i, 0, aux[i], matrix, gabarito[j])) 
			        ? quantidade(i, j + 1, tamanho, gabarito, matrix, aux)
					:quantidade(i + 1, 0, tamanho, gabarito, matrix, aux);
		}
		
		return (j==6) ? 1 + quantidade(i + 1, 0, tamanho, gabarito, matrix, aux) : quantidade(i + 1, 0, tamanho, gabarito, matrix, aux);
	}

	return 0;
}

int main ()
{
	int tam;
	scanf("%d", &tam);
	
	int matrix[tam][10], aux[tam];
	input_matrix(0, 0, tam, ',', matrix, aux);
	
	int gabarito[6];
	input_array(0, gabarito);
	
	printf("Total de ganhadores: %d\n", quantidade(0, 0, tam, gabarito, matrix, aux));
	
	return 0;
}
