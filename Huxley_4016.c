#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//4016 - KCAJ VS ORDEP: EM BUSCA DO N�MERO PERFEITO

int numprimo(int x, int y) 
{
    if(x < 2 ||x % y == 0) return 0;
    else if(x == 2 || y*y > x ) return 1;
    return numprimo(x, y+1);
}
int fibo(int numero, int primeiro, int segundo)
{
    if(numero == primeiro) return 1;
    else if(numero<primeiro) return 0;
    else return fibo(numero, segundo, primeiro+segundo);
}
int total(int numero)
{
 numero = (numprimo(numero,2) && fibo(numero, 0, 1)) ? 3 : (numprimo(numero,2) || fibo(numero, 0, 1)) ? 1 : 0;
 return numero;
}
int entrada(int input)
{
    if(input == 0) return 0;
    else{
        int Kcaj, Ordep;
        scanf("%i%i", &Kcaj, &Ordep);
        if(total(Kcaj)==total(Ordep)) printf("%s", Kcaj > Ordep ? "Kcaj\n" : "Ordep\n");
        else printf("%s", total(Kcaj)>total(Ordep) ? "Kcaj\n" : "Ordep\n");
    }
    return entrada(input-1);
}
int main() 
{
    int entradas;
    scanf("%i", &entradas);
    entrada(entradas);
	return 0;
}
