#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//2348 - Busca em sequência
//https://thehuxley.com/problem/2348

void input_array(int array[], int i, int tam)
{
  if (i == tam)  return; 
  scanf("%d", &array[i]); 
  input_array(array, i+1, tam);
}

int encontra(int a[], int numero, int i, int tam, int c)
{
    if(i == tam){
        //printf("\n%d\n", numero);
        printf("%s", c == 0 ? "nao" : "sim");
        return 0;
    } 
    
    else{
        if(a[i] == numero)c++;
        //printf("%d\n", c);
        
    }
    encontra(a,numero, i+1, tam,c);
}

int main()
{
    int numero, tamanho;
    
    scanf("%d%d", &numero, &tamanho);
    
    int a[tamanho];
    
    input_array(a,0,tamanho);
    
    encontra(a,numero,0, tamanho, 0);
   
    
}
