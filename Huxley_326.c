#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//326 - Logic sequence II
//https://thehuxley.com/problem/326

void sequencia(int quebra, int ultimo, int incremento, int contador)
{
    if(incremento <= ultimo)
    {
        printf("%d", incremento);
        incremento ++;
        contador = (contador == quebra-1) ? 0 : contador+1;
        printf("%s", !contador ? "\n" : " ");
        
        sequencia(quebra, ultimo, incremento, contador);
    }
    return;
}

int main() {
    
    int quebra_de_linha;
    int ultimo_numero, intervalo;
    
    scanf("%d%d", &quebra_de_linha, &ultimo_numero);
    
    sequencia(quebra_de_linha,ultimo_numero, 1, 0);
    
	return 0;
}
