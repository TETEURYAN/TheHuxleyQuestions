#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//2269 - O TRATADO DO RAMEN

float entradas(int entrada, float dinheiro, float soma)
{
    if(entrada == 0){
        if(soma>dinheiro){
            printf("Naruto, faltam %.0lf ryos! \n", soma-dinheiro);
        }
        else{
            //printf("%lf %lf", soma, dinheiro);
            printf("%s", (soma == 0)? "Naruto nao apareceu para comer" :  dinheiro>soma ? "Naruto conseguiu pagar a sua conta!" :"Naruto conseguiu pagar a sua conta!" );
    } return 0;
        }
    else{
        float qtd, gasto;
        scanf("%f", &qtd);
        gasto = (qtd == 1) ? 10 : (qtd >=2.0 && qtd <= 10.0) ? qtd*9 : qtd*8;
        soma += gasto;
        
    }
    return entradas(entrada-1, dinheiro, soma);
}

int main() {
    
    int entrada, dinheiro;
    
    scanf("%i%i", &dinheiro, &entrada);
    entradas(entrada, dinheiro, 0);
    
	return 0;
}
