#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//1109 - PROGRAMADOR DINÂMICO
void producao(int maior_dia){
	if(maior_dia==7)
		printf("DOMINGO");
    if(maior_dia==6)
		printf("SEGUNDA"); 
    if(maior_dia==5)
		printf("TERCA");       
    if(maior_dia==4)
		printf("QUARTA"); 
    if(maior_dia==3)
		printf("QUINTA");
    if(maior_dia==2)
		printf("SEXTA");
    if(maior_dia==1)
		printf("SABADO");      
		
		
}

void media_programas(int semana, int i, int c, int maior, int maior_dia){
	int programas_dia, linhas_dias;

	if(semana == 0){
		printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %i\nQUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %i\n", i,c);
		printf("DIA QUE MAIS PRODUZIU: ");
		producao(maior_dia);
		return 0;
	}
	scanf("%i%i", &programas_dia, &linhas_dias );
	
	if(programas_dia>=5){
		i++;
		
	}
		
	if(linhas_dias>=100){	
		c++;
		
		
	}
	if(linhas_dias > maior){
			maior = linhas_dias;  maior_dia = semana;
		}
	media_programas(semana-1,i,c, maior, maior_dia);
	
	
	
}
int main() {
	
	media_programas(7,0,0,0,0);
	return 0;
}
