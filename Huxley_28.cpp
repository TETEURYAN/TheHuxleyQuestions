#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//6 - INVERSÃO DE NÚMEROS
int main ()
{
	int alg,n1,n2;
	
	scanf("%d", &alg);
	
	n1 = alg/1 % 10;
	n2 = alg/10 % 10;
	
	if(n1 == 0){
		printf("%d", n2);
	
	}else{
	
	printf("%d",n1);
	printf("%d",n2);}
	return 0;
}