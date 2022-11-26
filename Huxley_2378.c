#include <stdio.h>

//2738 - Mineirin vs Cubano I

void printa_array(int array[], int i, int tam){
    if(i == tam) return;
    else printf("%i", array[i]);
    if(i != tam-1) printf(" ");
    printa_array(array, i+1, tam);
}

int indice(int array[], int tamanho, int value)
{
    if(tamanho == 0) return -1;
    if(array[tamanho] == value) return tamanho;
    return indice(array, tamanho - 1, value);
}

void swap(int* a, int* b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

void bubble_sort ( int array[], int n)
{
	for( int i = 0; i<n; i++)
	{
	    for( int j = 0; j<(n-1);j++)
	    {
	        if(array[j]>array[j+1])
	        {
	            
	            int temp = array[j];
	            array[j] = array[j+1];
	            array[j+1] = temp;
	        }
	    }
	}
	    printa_array(array, 0, 4);
	    //printf("\n%d\n", c);
	
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


void input_array(int array[], int aux[], int i, int tam)
{
  if (i == tam)  return; 
  scanf("%d", &array[i]); 
  aux[i] = array[i];
  input_array(array, aux, i+1, tam);
}



int main ()
{

	
	int array[4]; int aux[4];
	input_array(array,aux, 0, 4);
	bubble_sort(array, 4);
	vezes(0,array, aux,0);

	
	
	return 0;
}
