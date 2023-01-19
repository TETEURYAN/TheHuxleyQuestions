#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//979 - descending 4
//https://thehuxley.com/problem/979
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
    else printf("%i ", array[i]);
    printa_array(array, i+1, tam);
}

void input_array(int array[], int i, int tam)
{
  if (i == tam)  return; 
  scanf("%d", &array[i]); 
  input_array(array, i+1, tam);
}

int main() {

    int tamanho = 4;
    int array[tamanho];
    
    input_array(array,0,tamanho);
    bubble_sort(0,0,array,tamanho);
    
    printa_array(array, 0, tamanho);
    
    
	return 0;
}
