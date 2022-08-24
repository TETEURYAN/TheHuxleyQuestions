#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//6 - EQUAÇÃO DO 2º GRAU
int main ()
{
	double a,b,c,d,x1,x2;
	
	scanf("%lf", &a); 
	scanf("%lf", &b); 
	scanf("%lf", &c);
	
	d=b*b-4*a*c;
	
	 if( a == 0){
        printf("NEESG");
        
	}
     if( d<0){
        printf("NRR");   
    } else {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("%.2lf\n", x1);
        printf("%.2lf", x2);
   }
   return 0;
}



