#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//3591 - VOGAL OU CONSOANTE
int main(){
	char Consoante;
	
	scanf("%c", &Consoante);
	
	if(Consoante == 'M' || Consoante == 'm'){
	
		printf("Masculino", Consoante);
	}
	else if(Consoante == 'F' || Consoante == 'f'){
	
		printf("Feminino", Consoante);
	}
	else{
		printf("Genero nao especificado");
	}}
	
