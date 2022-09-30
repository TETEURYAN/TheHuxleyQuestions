#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//3286 - LOJA DE CERAMICAS

int main() {
    
    double area, tamanho, qtd_ceramica, area1;
    
    scanf("%lf%lf", &area, &tamanho);
    qtd_ceramica = area/tamanho;
    qtd_ceramica = ceil(qtd_ceramica);
    area1 = qtd_ceramica*tamanho*25;
    
    
    
    printf("%.0lf\n%.0lf",qtd_ceramica,  area1);
    
	return 0;
}
