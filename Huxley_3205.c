#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//3205 - LAB - 11

int main() 
{
    float value;
    scanf("%f", &value);
    
    float mot1 =(int) value/3;
    float mot2 = value/3;
    
    mot1 -= mot2;
    
    mot1 *= -1;
    
    mot2 -= mot1;
    
    float mot3 = value - 2*mot2;
    
    printf("%.1lf\n%.1lf\n", mot2, mot2);
    
    if(mot3 == mot2) printf("%.1lf", mot3);
    else printf("%.2lf", mot3);
    
    
	return 0;
}
