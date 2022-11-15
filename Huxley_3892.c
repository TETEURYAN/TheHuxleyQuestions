#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//3892 - Distância entre dois pontos
//https://thehuxley.com/problem/3892

double distance( double x1, double y1, double z1, double x2, double y2, double z2)
{
    return sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))+((z2-z1)*(z2-z1)));
}

int main ()
{
	double x1,x2,y1,y2,z1,z2, dis;
	
	scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1,&z1, &x2, &y2,&z2 );
	
	dis = distance(x1,y1,z1,x2,y2,z2);
	
	printf("%.16lf", dis);

	return 0;
}
