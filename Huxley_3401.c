#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.14159
//3401 - VOLUME DE UM CILINDRO

int main(){
	
	double raio, altura;
	
	scanf("%lf%lf", &raio, &altura);
	
	printf("%.2lf", raio*raio*PI*altura);
	
	return 0;
	
}
