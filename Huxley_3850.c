#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//3850 - Starting in array
//https://thehuxley.com/problem/3850
void input_array(int array[], int i, int tam, int *soma, int *media)
{
  if (i == tam)  return; 
  scanf("%d", &array[i]); *media += array[i];
  if(array[i] % 3 == 0) *soma += array[i];
  input_array(array, i+1, tam, soma, media);
}

int main() {
    int array[10];
    int soma = 0, media = 0;
    input_array(array,0,10,&soma,&media);
    printf("Média: %.1f\nDivisíveis: %d", (float)media/10, soma );
    
	return 0;
}
