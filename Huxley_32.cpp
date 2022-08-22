#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//32 - FAHRENHEIT PARA CELSIUS
int main()
{
    float c, f;
 
	scanf("%f", &f);
    c = (f - 32) * 5 / 9;
 
    printf("%.2f", c);
 
    return(0);
}