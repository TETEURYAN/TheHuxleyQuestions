#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//510 - INGRESSO NO CINEMA
int main ()

{ 
	int a,b;
	
	scanf("%i %i", &a, &b);
	
	if ( a==0 && b==0){
		printf("0");	
	}
	else if ( (a==1 && b==0) || ( a==0 && b==1) || ( a==1 && b==1)){
		printf("1");
	}
	return 0;	
}
    