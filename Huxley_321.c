#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//321 - fruit
//https://thehuxley.com/problem/321

int peso_das_frutas (int i, char frutas[])
{
	if(frutas[i] == '\0')
  {
		return 1;
    }
	return (frutas[i] == ' ') ? 1 + peso_das_frutas (i + 1, frutas) : peso_das_frutas (i + 1, frutas);
}

void entrada (int i, int tam, double *preco, double *peso)
{	
	if (i < tam)
	{
		char frutas[256];
		double gastos;
		scanf("%lf %[^\n]s", &gastos, frutas);
		
		
		int massa_total = peso_das_frutas(0, frutas);
		
		*preco += gastos;
		*peso += massa_total;
		
		printf("dia %d: %d kg\n", i + 1, massa_total);
	    entrada (i + 1, tam, preco, peso);
	}
	
	else
	{
	    *preco /= i;
	    *peso /= i;
	    return;
	}
}

int main() 
{
	int entradas;
	double peso = 0;
	double preco = 0;
	
	
	scanf("%d", &entradas);
	
    entrada(0,entradas, &preco, &peso);
    
    printf("%.2f kg por dia\n", peso );
	printf("R$ %.2f por dia\n", preco);
    
	return 0;
}
