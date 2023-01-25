#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//3377 - MAIOR DE IDADE
int main(){
	int idade;
	scanf("%i", &idade);
	
	if(idade<18){
		printf("menor de idade");
	}
	else{
		printf("maior de idade");
	}
}
