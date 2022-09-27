#include <stdio.h>
#include <math.h>
//571 - RU.


int main(){
	int qtd_refeicoes, moeda_constante, devedor_ru;
	
	scanf("%i%i", &qtd_refeicoes, &moeda_constante);
	
	//devedor_ru = (moeda_constante - qtd_refeicoes)/3.25;
	
	if(moeda_constante == 2){
	moeda_constante *= qtd_refeicoes; 
	qtd_refeicoes *= 3.25;
	devedor_ru = fabs((moeda_constante - qtd_refeicoes)/5.5);
	printf("%d\n", devedor_ru);
	 }
	
	else{
	moeda_constante *= qtd_refeicoes; 
	qtd_refeicoes *= 3.25;
	devedor_ru = fabs(moeda_constante - qtd_refeicoes)/3.25;
	printf("%d", devedor_ru); 
	}
}
