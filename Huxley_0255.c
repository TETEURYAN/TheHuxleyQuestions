#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//255 - double numbers inverse
//https://thehuxley.com/problem/255?locale=pt_BR
void input_array(int array[], int i, int tam)
{
  if (i == tam)  return; 
  scanf("%d", &array[i]); 
  input_array(array, i+1, tam);
}


void printa_array(int array[], int i, int tam){
    
    if(i == tam)return;
    else printf("%d\n", array[tam-1]*2);
    printa_array(array, i, tam-1);
}

int main() {
    
    int entrada;
    
    scanf("%d", &entrada);
 
    double array[entrada];
    input_array(array,0, entrada);
   
    printa_array(array, 0, entrada);
    
	return 0;
}
