#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//341 - Preço dos jogos
//https://www.thehuxley.com/problem/341
void conta_total(int contador,double dificuldade[], int i, int n, double preco,int indice){
    if (indice==0)
    {
        printf("Jogo[%d] = R$%.2lf\n",i,preco);
        entrada(contador-1, dificuldade, i+1);
        return;
    }

    if (preco <= 45 ){indice=1;}
    else if (preco - (preco*dificuldade[n])/2 < 45){indice=1;preco=  45;}
    else if (preco <= 100 && preco > 45 ) {preco -= (preco*dificuldade[n])/2;}
    else preco-= preco*dificuldade[n];
    
    conta_total(contador,dificuldade,i,n,preco,indice-1);
}
void entrada(int contador,double dificuldade[],int i)
{
    if (contador == 0)return;
    double preco; int tipo;
    scanf("%d%lf", &tipo, &preco);
    conta_total(contador, dificuldade, i, tipo, preco,3);
}

int main(){
    int contador;
    double dificuldade[6] = {0.25,0.20,0.18,0.15,0.12,0.10};

    scanf("%d", &contador);
    entrada(contador, dificuldade,0);
    return 0;
}
