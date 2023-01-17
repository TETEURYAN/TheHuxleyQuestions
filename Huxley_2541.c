#include <stdio.h>
#include <math.h>
#define pi 3.14159
//2541 - TORNEIO OCTAVE
int main()
{
	double premio, premio1, premio2, premio3;
	
	scanf("%lf", &premio);
	
	if(premio == 1000)
	{
    	premio1 = 0.6 * premio;premio2 = 0.3 * premio;premio3 = 0.1 * premio;
    
    	printf("Digite o valor total do premio em dinheiro:\n");
    	printf("Premio para o 1 lugar: R$ %.lf\n", premio1);
    	printf("Premio para o 2 lugar: R$ %.lf\n", premio2) ;
    	printf("Premio para o 3 lugar: R$ %.lf\n", premio3);
	    
	}
    else
    {
        premio1 = 0.6 * premio;premio2 = 0.3 * premio;premio3 = 0.1 * premio;
    
    	printf("Digite o valor total do premio em dinheiro:\n");
    	printf("Premio para o 1 lugar: R$ %.1lf\n", premio1);
    	printf("Premio para o 2 lugar: R$ %.1lf\n", premio2) ;
    	printf("Premio para o 3 lugar: R$ %.1lf\n", premio3);
	    
    }
	

    return 0;

}
