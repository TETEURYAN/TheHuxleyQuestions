#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//2351 - Média dos valroes implementado em lista

double input_array(double array[], int tam, double media)
{
    for(int i = 0; i < tam; i++)
    {
        scanf("%lf", &array[i]);
        media += array[i];
    }
     
     return media;
}

int main() 
{
    int i = 0;
    
    int tam;
    scanf("%d", &tam);
    
    double array[tam];

    double media = input_array(array, tam, 0.0);
    
    
    printf("%.2lf", media/tam);
    
	return 0;
}
