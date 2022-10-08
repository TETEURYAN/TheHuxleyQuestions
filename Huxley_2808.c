#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// 2808 - GASTO DE COMBUSTIVEL
int main() {
    int tempo, vel;
    
    float distancia, gasto;
    
    scanf("%i%i", &tempo, &vel);
    
    distancia = tempo *vel;
    
    gasto = distancia/12;
    
    printf("Digite o tempo gasto (em horas) e a velocidade media (em km/h):\n");
    printf("Quantidade de litros gastos na viagem: %f", gasto);
    
	return 0;
}
