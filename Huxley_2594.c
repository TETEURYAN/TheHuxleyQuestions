#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//2594 - Implementing Sort Algorithms

void swap (int *x, int *y)
{
	int aux = *x;
	*x = *y;
	*y = aux;
}

void bubble_sort (int i, int j, int array[], int n)
{
	int aux;
	if (i < n)
	{
		if (j < n)
		{
			if (n != j + 1)
				if (array[j] < array[j + 1])
					swap(&array[j], &array[j + 1]);
				
			bubble_sort(i, j + 1, array, n);
		}
		else
		{
			bubble_sort(i, i, array, n - 1);
		}
	}
}

void printa_array(int array[], int i, int tam){
    if(i == tam) return;
    else{ printf("%i", array[i-1]);}
    if(i != 1) printf(", ");
    
    printa_array(array, i-1, tam);
}

void input_array(int array[], int i, int tam)
{
  if (i == tam)  return; 
  scanf("%d", &array[i]); 
  input_array(array, i+1, tam);
}

int main() {
    int array[6];
    
    input_array(array,0,6);
    bubble_sort(0,0,array,6);
    printf("[");
    printa_array(array,6,0);
    printf("]");
	return 0;
}
