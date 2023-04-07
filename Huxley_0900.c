#include <stdio.h>

//900 - Media of Numbers

void repete(int entrada, double num, double soma){
  
    if(entrada == 0){
        printf("Media dos numeros: %.15lf", soma/100);
        return 0;
    }
    else{
        printf("Digite um numero:\n");
        scanf("%lf", &num);
        soma += num;
        //printf("%lf", soma);
        repete(entrada-1, num, soma);
    }
    
}
int main() {
    int num;
    repete(100, num, 0);
	return 0;
}
