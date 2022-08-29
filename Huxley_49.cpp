#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//49 -  CLASSIFICAÇÃO DOS TRIÂNGULOS
int main ()

{
    float a,b,c;
    
	scanf("%f %f %f", &a,&b,&c);
	
	if (a==b && b==c){
		printf("equilatero");
	}
	
	else if ( (a==b && a!=c) || (a==c && a!=b) || (b==c && a!=b)){
		printf("isosceles");
	}
	
	else if (a!=b && b!=c){
		printf("escaleno");
	}
	return 0;
}       