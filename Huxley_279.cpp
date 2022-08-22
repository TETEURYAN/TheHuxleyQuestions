#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// 279 - SALÁRIO
int main ()
{
	int n, h;
	float job;
	
	scanf("%i", &n);
	scanf("%i", &h);
	scanf("%f", &job);
	
	printf("NUMBER = %i\n", n);
	printf("SALARY = R$ %.2f", h*job );
	return 0;
}