#include <stdio.h>

//2738 - Mineirin vs Cubano I

void printa_array(int array[], int i, int tam){
    if(i == tam) return;
    else printf("%i", array[i]);
    if(i != tam-1) printf(" ");
    printa_array(array, i+1, tam);
}

void input_array(int array[], int aux[], int i, int tam)
{
  if (i == tam)  return; 
  scanf("%d", &array[i]); 
  aux[i] = array[i];
  input_array(array, aux, i+1, tam);
}

void swap(int* a, int* b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
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

int indice(int array[], int tamanho, int value)
{
    if(tamanho == 0) return -1;
    if(array[tamanho] == value) return tamanho;
    return indice(array, tamanho - 1, value);
}

void vezes( int i, int array[], int aux[], int c)
{
	if( i < 4)
	{
		if(array[i] != aux[i])
		{
			c++;
			swap(&aux[i], &aux[indice(aux, 3, array[i])]);
		}
		vezes(++i, array, aux, c);
	}
	else printf("\n%d", c); return;
}

int main ()
{

	
	int array[4]; int aux[4];
	input_array(array,aux, 0, 4);
	bubble_sort(0,0,array, 4);
	
	printa_array(array,0,4);
	vezes(0,array, aux,0);

	return 0;
}
