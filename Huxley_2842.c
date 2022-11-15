#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//2842 - Divisíveis por 3
//https://thehuxley.com/problem/2842

int main() {
    int num, i, resto,c = 0;
    scanf("%d", &num);
    
    for(i = 1; i<num+1; i++){
        resto = num%i;
        if(resto == 0){
            if(i % 3 == 0) c++;
        }
    }
    
    printf("Digite um numero inteiro:\n");
    
    if(!c) printf("O numero nao possui divisores multiplos de 3");
    else printf("Quantidade de divisores divisiveis por 3: %d", c);
    
	return 0;
}
