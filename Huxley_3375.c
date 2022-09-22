#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.14

int main() {
	
	float altura_cilindro, raio_cilindro,base_cilindro, area_cilindro,
	qtd_tinta,custo_lata,qtd_lata, total, me_lata, custo2, total_lata, lata;
	
	scanf("%f%f%f%f%f", &altura_cilindro, &raio_cilindro, &custo_lata, &lata,&total);
	
	base_cilindro = 2*PI*pow(raio_cilindro,2);
	
	area_cilindro = base_cilindro + 2.0*PI*raio_cilindro*altura_cilindro;
	
	qtd_tinta = area_cilindro/total;
	
	qtd_lata = qtd_tinta/lata;
	
	total_lata = ceil(qtd_lata);
	
	custo2 = total_lata * custo_lata;

	printf("Quantidade de latas: %f\nCusto: R$%f", total_lata, custo2);
	 
	
	
	
	return 0;
}
