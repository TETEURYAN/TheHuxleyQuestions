#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.14

// 2596 - Amount of ink

int main() {
	
	float altura_cilindro, raio_cilindro,base_cilindro, area_cilindro,
	qtd_tinta,custo_lata,qtd_lata, total;
	
	scanf("%f%f%f", &altura_cilindro, &raio_cilindro, &custo_lata);
	
	base_cilindro = 2*PI*pow(raio_cilindro,2);
	
	area_cilindro = base_cilindro + 2.0*PI*raio_cilindro*altura_cilindro;
	
	qtd_tinta = area_cilindro/3;
	
	qtd_lata = qtd_tinta/5;
	
	total = custo_lata * qtd_lata;

	printf("%fm2\n%fl\n%f\nR$%f", area_cilindro, qtd_tinta, qtd_lata, total);
	 
	
	
	
	return 0;
}
