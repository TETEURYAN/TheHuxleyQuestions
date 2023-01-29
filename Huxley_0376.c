#include <stdio.h>


int main ()
{
	float n1,n2,p1,p2,p3,media;
	
	scanf("%f", &n1);
	scanf("%f", &n2);
	p1 = 3.5;
	p2 = 7.5;
	p3 = p1 + p2;
	media = (n1*p1+n2*p2)/p3;
	printf("MEDIA = %.5f", media);
	return 0;
}
