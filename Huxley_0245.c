#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//245 - Looking for caracter in string
//https://www.thehuxley.com/problem/245

int conta(char frase[], char letra[], int i, int c, int tamanho)
{
    if( i == tamanho)
    {
        return -1;
    }
    else
    {
        if(frase[i] == letra[0]) return i;
    }
    return conta(frase,letra, i+1,c, tamanho);
}

int main() {
    
    char frase[255];
    char letra[1];
    
    gets(frase);
    scanf(" %c", letra);
    
    int tamanho = strlen(frase);
    printf("%d", conta(frase,letra, 0, 0, tamanho));
	return 0;
}
