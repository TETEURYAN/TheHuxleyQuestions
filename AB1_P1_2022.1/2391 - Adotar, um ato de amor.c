#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//2391 - ADOTAR, UM ATO DE AMOR
int main() {
	int idade_adotante, idade_adotado;
	char caso1, caso2, caso3, caso4, caso5, caso6, mod;
	scanf("%i %c %c %c %i %c %c %c",&idade_adotante, &caso1, &caso2, &caso3, &idade_adotado, &caso4, &caso5, &caso6);	
 
 	mod = fabs(idade_adotante-idade_adotado); 
 
 	if(caso1 == 'S'|| mod<16 || idade_adotante<18){
 		printf("Não pode adotar");}
 		
 	else if(caso2 == 'S' && caso3 == 'N' || caso2 == 'N' && caso3 == 'S'){
 		printf("Não pode adotar");
	 } 
	else if(caso4 == 'N' && caso5 == 'N' || caso4 == 'S' && caso5 == 'S'){
 		printf("Não pode adotar");
	 }
	else if((caso4 == 'S' && caso5 == 'N') && idade_adotado>=12 &&  caso4== 'S' && caso6 == 'N'){
 		printf("Não pode adotar");
	 }
 	else{
 		printf("Pode adotar");
	 }	
 		
 	 
 
	return 0;
}