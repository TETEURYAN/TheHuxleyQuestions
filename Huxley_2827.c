#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//2827 - mining
//https://www.thehuxley.com/problem/2827
int conclusao(int array[], int i)
{
    if(array[i] == -1)return i;
    return conclusao(array, array[i]);
}

void input_array(int array[], int i, int tam)
{
  if (i == tam)  return; 
  scanf("%d", &array[i]); 
  input_array(array, i+1, tam);
}

int main() {
    int tam;scanf("%d", &tam);
    int  numero; int array[tam];
    input_array(array, 0, tam);
    scanf("%d", &numero);
    
    printf("%d", conclusao(array, numero));
}
