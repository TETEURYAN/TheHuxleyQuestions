#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//107 - Inverse number
//https://thehuxley.com/problem/107?locale=pt_BR
void entrada()
{
    int input;
    int numero, ordem;
    scanf("%i", &numero);
    
    while(numero != 0){
    if(numero >= 0){
        do{
            ordem = numero%10;
            printf("[%d]", ordem);
            numero /=10;
        } while(numero!=0);
        printf("\n");
    }}
    
    else return;
    entrada();
    
    
}

int main() {
    entrada();
	return 1;
}
