#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//2845 - books in the backpack
//https://www.thehuxley.com/problem/2845
void peso(int soma, int c)
{
    int carga;
    scanf("%d", &carga);
    soma += carga;c++;
    if(soma>=18){printf("\nPodem ser carregados %d livros.", c-1);return;}
    peso(soma,c);
}

int main() 
{
    int i;
    printf("Insira o peso dos livros:");
    peso(0,0);
	return 0;
}
