#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main ()
{	
	double area,raio;	
	scanf("%lf", &raio );
	raio = raio/100;	
	area = 3.14159*raio*raio;	
	printf("Area = %.4lf\n", area);
}