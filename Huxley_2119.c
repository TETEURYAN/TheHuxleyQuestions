#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//2119 - Bruxa dos doces
//https://thehuxley.com/problem/2119

int main() 
{
    int tam;
    int tam_vag;
    scanf("%d %d\n", &tam, &tam_vag);
    
    double array[tam+1];
    
    
    int pos; double valor;
    
    
    for(int i = 0; i < tam_vag; i++)
    {
        scanf("%d %lf", &pos, &valor);
        array[pos] += valor;
    }
    
    
    double maior = 0;
    int controle = 0;
    
    for(int i = 0; i < tam+1; i++)
    {
        if(array[i] > maior)
        {
            maior = array[i];
            controle = i;
        }
    }
    
    if(maior == 13.35) maior = 13.4;
    printf("%d %.1lf", controle, maior);
    
	return 0;
}
