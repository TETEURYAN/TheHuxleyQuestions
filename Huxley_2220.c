#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//2220 - Yoshi, o melhor amigo
//https://thehuxley.com/problem/2220

char *cor(int verde, int vermelho, int azul, int amarelo)
{
	if(verde == 0)
		if(vermelho == 0)
			if(azul == 0)
				if(amarelo == 0)
					return "Acho que vou a pe :(\0";

	if(vermelho > azul)
	{
		if(vermelho > amarelo)
		{
			if(vermelho - 1 > verde) return "Vermelho\0";
		    else return "Verde\0";
			
		}
		else if(amarelo -1 > verde) return "Amarelo\0";
		
		else return "Verde\0";
		
	}
	else if(azul > amarelo)
	
		if(azul - 1 > verde) return "Azul\0";
	    else return "Verde\0";
	else if(amarelo - 1 > verde) return "Amarelo\0";
	else return "Verde\0";
	
} 

int valor(int moedas){
	
	int preco, velocidade;
	scanf("%d%d", &preco, &velocidade);
	if(moedas >= preco) {return velocidade/preco;}
	else return 0;
}

int main ()
{
	int moedas;
	double verde, vermelho, azul, amarelo;
	
	scanf("%d", &moedas);

	verde 	= valor(moedas);vermelho = valor(moedas);
    azul 	= valor(moedas);amarelo	= valor(moedas);
    
	printf("%s\n", cor(verde, vermelho, azul, amarelo));

	return 0;
}
