#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//29 - DISTÂNCIA ENTRE DOIS PONTOS
int main ()
{
	double x1,x2,y1,y2,dis;
	
	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	
	dis = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
	printf("%.4lf", dis);
	return 0;
}