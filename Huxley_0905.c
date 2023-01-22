#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//905 - VALORES DIGITADOS
//https://thehuxley.com/problem/905

int main() {
    int qtd = 6;
    int n;
    int num;

    for (n=1; n<qtd; n++){
        printf ("Digite um numero inteiro:\n");
    }
   for (n=1; n<qtd; n++){
        scanf("%i", &num);
        printf("Numero %d: %d\n", n, num); 
    }
    
	return 0;
}
