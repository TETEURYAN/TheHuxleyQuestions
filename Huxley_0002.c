#include <stdio.h>

//2 - 3 numbers in crescent order

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
				if (array[j] > array[j + 1])
					swap(&array[j], &array[j + 1]);
				
			bubble_sort(i, j + 1, array, n);
		}
		else
		{
			bubble_sort(i, i, array, n - 1);
		}
	}
}

void bubble(int i, int j, int array[], int tam)
{
	if(i == tam - 1) return;

	int aux;

	if(array[i] > array[j]){
		aux = array[i];
		array[i] = array[j];
		array[j] = aux;
	}
	j++;

	if(j == tam) i++; j = i+1;

	bubble(i,j,array,tam);
}

void input_array(int array[], int i, int tam)
{
  if (i == tam)  return; 
  scanf("%d", &array[i]); 
  input_array(array, i+1, tam);
}

void printa_array(int array[], int i, int tam){
    if(i == tam) return;
    else printf("%i\n", array[i]);
    printa_array(array, i+1, tam);
}


int main ()
{
	
	
	int entrada = 3;
	int array[entrada];
	input_array(array, 0, entrada);
	bubble_sort(0, 0, array, entrada);
	printa_array(array, 0, entrada);
	
	return 0;
}
