#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//956 - Desafio do maior e menor número
//https://thehuxley.com/problem/956

void entrada( int input, int i, int array[], int *contador, int *maior)
{
    int num;
    scanf("%d", &num);
    if(num == 0) return;
    else{
        array[i] = num;
        if(array[i] > *contador) *contador = array[i];
        if(array[i] < *maior) *maior = array[i];
        
    }
    entrada(input, i+1, array, contador, maior);
}

int main()
{
    int array[50];
    int inout, contador = 0, maior = 10000;
    entrada(inout,0, array,&contador, &maior);
    printf("%d %d",maior , contador);
    return 0;
}
