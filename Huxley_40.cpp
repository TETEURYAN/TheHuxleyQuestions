#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	float valor, final;
	
	
	scanf("%f", &valor);
	final = valor + valor*0.1;

	printf("%.2f", final);
	return 0;	
}