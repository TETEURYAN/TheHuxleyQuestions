#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//1250 - POKÉMON BATTLE
int rounda(int vida_clodes,int vida_bezaliel,int dano_clodes,int dano_bezaliel, int razao, int b){
	if (dano_clodes >= vida_bezaliel && b == 1)
	{
		printf("Clodes\n"); return 0;
	}
	if(dano_clodes * razao >= vida_bezaliel)
	{
		printf("Clodes\n"); return 0;
	}
	if(dano_bezaliel * b >= vida_clodes)
	{
		printf("Bezaliel\n"); return 0;
	}
	rounda(vida_clodes, vida_bezaliel, dano_clodes+50, dano_bezaliel, razao, b+1);
}		

int batalhas(int rodadas){
	int vida_clodes, vida_bezaliel, dano_clodes, dano_bezaliel, razao;
	if(rodadas==0){
		return 0;
	}
	else{
		razao = vida_clodes/dano_bezaliel;
		scanf("%i%i%i%i", &vida_clodes,&vida_bezaliel,&dano_clodes,&dano_bezaliel );
		rounda(vida_clodes, vida_bezaliel, dano_clodes, dano_bezaliel, razao, 0);
	}
	return batalhas(rodadas-1);
}

int main(){
	int rodadas;
	scanf("%i", &rodadas);
	batalhas(rodadas);
	
	return 0;
}
