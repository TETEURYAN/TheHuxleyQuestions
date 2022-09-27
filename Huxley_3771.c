#include <stdio.h>
#include <math.h>
//3771 - Tempo de voagem

double distanciaEntreDoisPontos(double xa, double ya, double xb, double yb) {
    return sqrt(pow(xb - xa, 2.0) + pow(yb - ya, 2.0));
}

int main(){
	int x1, y1, x2, y2, veloMilos;
	double dist, tempo;
	
	scanf("%i%i%i%i%i", &x1, &y1, &x2, &y2, &veloMilos);
	
	dist = distanciaEntreDoisPontos(x1,y1,x2,y2);
	
	tempo = dist/veloMilos;
	
	printf("Milos esta no ponto (%i, %i) indo para (%i, %i) e provavelmente ira chegar em %.2lf horas.\n", x1,y1,x2,y2,tempo);
	
	
	
	
}
