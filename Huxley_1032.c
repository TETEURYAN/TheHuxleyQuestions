#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//1032 -  Quantas tocas existem?
//https://thehuxley.com/problem/1032

void input_array(int array[], int i, int tam)
{
  if (i == tam)  return; 
  scanf("%d", &array[i]); 
  input_array(array, i+1, tam);
}

int casa (int array[], int i, int tam)
{
	if(i < tam)
	{
		if(array[i] != tam) return i;
		return casa(array,i + 1, tam);
	}
	return tam;
}

int conta_tocas (int array[], int i, int tam)
{
	if (i < tam)
	{
		if (array[i] == tam)return 1 + conta_tocas (array,casa(array,0, tam),tam);
		int aux = array[i];
		array[i] = tam;
		return conta_tocas (array, aux, tam );
	}
	
	return 0;
}

int main()
{
    int numero, tamanho;
    scanf("%d", &tamanho);
    int a[tamanho];
    input_array(a,0,tamanho);
   
    printf("%d\n", conta_tocas(a,0,tamanho));
    
}
