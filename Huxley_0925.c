#include <stdio.h>
#include <math.h>
//925 - Triângulo.

double distanciaEntreDoisPontos(double xa, double ya) {
    return sqrt(pow(0.0 - xa, 2.0) + pow(0.0 - ya, 2.0));
}
int main(){
	double a,b,c;
	scanf("%lf%lf%lf", &a, &b, &c);
	printf("Informe o comprimento do primeiro lado do triangulo:\n");
	printf("Informe o comprimento do segundo lado do triangulo:\n");
	printf("Informe o comprimento do terceiro lado do triangulo:\n");
	printf("Os lados informados podem formar um triangulo\n");
	
	if(a!=b && a!=c && b!=c) printf("Triangulo Escaleno");
	else if(a==b && a!=c || b!=c && a == c ||a!=b && b==c) printf("Triangulo Isosceles");
	else if(a==b && a==c) printf("Triangulo Equilatero");
}
