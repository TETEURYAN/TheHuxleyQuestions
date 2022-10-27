#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//2817 - Numbers in recent rodemc

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
    else printf("%i\n", array[i-1]);
    printa_array(array, i-1, tam);
}

void input_array(int array[], int i, int tam)
{
  if (i == tam)  return; 
  scanf("%d", &array[i]); 
  input_array(array, i+1, tam);
}

int main() {
    int array[3];
    
    input_array(array,0,3);
    bubble_sort(0,0,array,3);
    printf("Digite cada numero e pressione ENTER:\nNumeros em ordem crescente:\n");
    printa_array(array,3,0);
    
	return 0;
}
