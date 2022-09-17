#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main() {
	int day, estudante, socio;
	double valor = 15;
	
	scanf("%i %i %i", &day,&estudante, &socio);
	
	if(day>4)
		valor = 30;
	
	
	if(estudante)
		valor *=0.7;
	
	
	if(socio && day>4)
		valor *=0.8;
	
	
	printf("%s R$ %.2lf", estudante ? "ESTUDANTE:": socio ? "SOCIO:":"COMUM:", valor);
	
}
