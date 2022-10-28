#include <stdio.h>
//2532 - turn pair
//https://www.thehuxley.com/problem/2352?locale=pt_BR
void input_array(int array[], int i, int tam)
{
  if (i == tam)  return; 
  scanf("%d", &array[i]); 
  input_array(array, i+1, tam);
}

void printa_array(int array[], int i, int tam){
    if(i == tam) return;
    else {
        if(array[i]%2 == 0)printf("%i\n", array[i]+1);
        else printf("%i\n", array[i]);}
    printa_array(array, i+1, tam);
}


int main ()
{
	int entrada;
	scanf("%d", &entrada);
	
	int array[entrada];
	input_array(array, 0, entrada);
	printa_array(array, 0, entrada);
	
	return 0;
}
