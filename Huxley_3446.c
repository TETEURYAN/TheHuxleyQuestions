#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//3446 - Contagem em string
//https://thehuxley.com/problem/3446
int conta(char frase[], int i, int c, int tamanho)
{
    if( i == tamanho) return c;
    else{
        if(frase[i] == ('a') || frase[i] == ('A')) c++;
    }
    
    return conta(frase, i+1,c, tamanho);
}

int main() {
    char frase[255];
  
    gets(frase);
    int tamanho = strlen(frase);
    printf("%d\n", conta(frase,0,0,tamanho));
	return 0;
}
