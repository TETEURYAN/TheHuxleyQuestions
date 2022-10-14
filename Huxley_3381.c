#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//3381 - FAIXA ETÁRIA DE IDADE
int main(){
	int idade;
	scanf("%i", &idade);
	if(idade<=2){
		printf("O individuo eh um Bebe Jovem Menor de Idade.");
	}
	else if(idade>2 && idade<=12){
		printf("O individuo eh uma Crianca Jovem Menor de Idade.");
	}
	else if(idade>12 && idade<18){
		printf("O individuo eh um Adolescente Jovem Menor de Idade.");
	}
	else if(idade>=18 && idade<=19){
		printf("O individuo eh um Jovem Maior de Idade.");
	}
	else if(idade>=20 && idade<=45){
		printf("O individuo eh um Adulto Maior de Idade.");
	}
	else if(idade>45 && idade<60){
		printf("O individuo eh um Adulto de Meia Idade Maior de Idade.");
	}
	else if(idade>=60 && idade<=75 ){
		printf("O individuo eh um Idoso Maior de Idade.");
	}
	else if(idade>75 && idade<=90){
		printf("O individuo eh um Idoso Ansiao Maior de Idade.");
	}
	else if(idade>90){
		printf("O individuo eh um Idoso na Velhice Extrema Maior de Idade.");
	}
	
}
