#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//274 - MEDIA 2
int main ()
{
	float n1,n2,n3,A,B,C,D,media;
	
	scanf("%f", &n1);
	scanf("%f", &n2);
	scanf("%f", &n3);
	A = 2;
	B = 3;
	C = 5;
	D = A+B+C;
	media = (n1*A+n2*B+n3*C)/(A+B+C);
	printf("MEDIA = %.1f", media);
	return 0;
}