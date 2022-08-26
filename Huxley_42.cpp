#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//42 - ELEITOR
int main ()
{
	int A;
	
	scanf("%i", &A);
	
	
		if(A<16){
		printf("nao eleitor");
	}
		if(A <= 65 && A >= 18){
		printf("eleitor obrigatorio");
	}
	
		if(A >= 16 && A < 18  ){
		printf("eleitor facultativo");
	}
		if( A > 65 ){
		printf("eleitor facultativo");
	}
	
	return 0;
}
	