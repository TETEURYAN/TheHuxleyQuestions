#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//2222 - Pegue-a se puder
//https://thehuxley.com/problem/2222

double count(int impulso, double altura, int dist, int peso, char yoshi[])
{
    if(!strcmp(yoshi,"Sim"))
    {
        impulso += 5;
        peso += 50;
    }
    
    return (impulso*impulso*impulso)/( sqrt(altura) + (dist/2) + (peso/3));
}

int main() 
{
    int impulso;
    double altura;
    int dist;
    int peso;
    char yoshi[50];
    
    scanf("%d\n%lf\n%d\n%d\n", &impulso, &altura, &dist, &peso);
    
    scanf("%s", yoshi);
    
    double final = count(impulso, altura, dist, peso, yoshi);
    
    printf("%s\n", (final > 100.0) ? "Voce consegue" : "Isso e perda de tempo");
    
	return 0;
}
