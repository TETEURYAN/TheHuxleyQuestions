#include <stdio.h>
#include <math.h>

//841 - Acima da Media
//https://thehuxley.com/problem/841

void result( float * values, float med)
{
    int up = 0;
    for( int i = 0; i < 3; i++)
        if(values[i] >= med) up++;
    printf("%d", up == 3 ? 0 : up);
}

void media( float * values, float * med)
{
    float aux;
    for( int i = 0; i < 3; i++)
        aux += values[i];
    *med = aux;    
}

int main() 
{
    float values[3];
    
    for(int i = 0; i < 3; i++)
        scanf("%f", &values[i]);
        
    float med = 0;
    media(values, &med);
    result(values, med/3);
    
    
	return 0;
}
