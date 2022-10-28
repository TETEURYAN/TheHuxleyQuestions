#include <stdio.h>
//72 - inverse
void input_array(int array[], int i, int tam)
{
  if (tam == i)  return; 
  scanf("%d", &array[tam-1]); 
  input_array(array, i, tam-1);
}

void printa_array(int array[], int i, int tam){
    if(i == tam) return;
    else printf("%i ", array[i]);
    printa_array(array, i+1, tam);
}


int main ()
{
	int entrada;
	scanf("%d", &entrada);
	
	int array[entrada];
	input_array(array, 0, entrada);
	printa_array(array,0, entrada);
	
}
