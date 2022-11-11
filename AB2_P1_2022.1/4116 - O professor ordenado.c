#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void input_array(int array[], int i, int tam)
{
  if (i == tam) return;
  scanf("%d", &array[i]); 
  input_array(array, i+1, tam);
}

void printa_array(int array[], int i, int tam){
    if(i == tam){printf("\n"); return;}
    else printf("%i", array[i]);
    if(i != tam-1) printf(" ");
    printa_array(array, i+1, tam);
}

void swap (int *x, int *y)
{
	int aux = *x;
	*x = *y;
	*y = aux;
}

void bubble_crescente (int i, int j, int array[], int n)
{
	int aux;
	if (i < n)
	{
		if (j < n)
		{
			if (n != j + 1)
				if (array[j] < array[j + 1])
					swap(&array[j], &array[j + 1]);
				
			bubble_crescente(i, j + 1, array, n);
		}
		else
		{
			bubble_crescente(i, i, array, n - 1);
		}
	}
}

void bubble_decrescente (int i, int j, int array[], int n)
{
	int aux;
	if (i < n)
	{
		if (j < n)
		{
			if (n != j + 1)
				if (array[j] > array[j + 1])
					swap(&array[j], &array[j + 1]);
				
			bubble_decrescente(i, j + 1, array, n);
		}
		else
		{
			bubble_decrescente(i, i, array, n - 1);
		}
	}
}

void entrada( int turma, int i)
{
	if(0 < turma)
	{
		int array[10];
		input_array(array,0,10);
		printf("turma %d:\n", i);
		bubble_decrescente(0,0, array, 10);
		printa_array(array, 0,10);
		bubble_crescente(0,0,array,10);
		printa_array(array, 0,10);
	    entrada(turma-1,i+1);
	}
	return;
}

int main() {
	int turma;
	scanf("%d", &turma);
	entrada(turma,1);
	return 0;
}