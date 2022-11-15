#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//170 - product of prime numbers
//https://thehuxley.com/problem/170

int primo(int n, int div){
    if(n < 2) return 0;
    if(div > sqrt(n)) return 1;
    if(n % div == 0) return 0;
    else primo(n, div+1); 
 
}

void input_array(int array[], int i, int tam)
{
  if (i == tam)  return; 
  scanf("%d", &array[i]); 
  input_array(array, i+1, tam);
}

int vef_primo_array(int array[], int i, int tam)
{
    if( i <  tam)
    {
        int n = primo(array[i],2);
        
        return (!n) ? 0 : vef_primo_array(array, i+1, tam);
    }
    return 1;
}
int main() {
    
    int array[4];
    
    input_array(array, 0, 4);
    
    int n = vef_primo_array(array,0,4);
    
    if(!n) printf("SEM PRODUTO");
    else printf("%d", array[0] * array[1] * array[2] * array[3]);
    
	return 0;
}
