#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// 959 - Logic sequence
//https://thehuxley.com/problem/959

void sequencia(int quebra, int ultimo, int intervalo, int incremento, int contador)
{
    if(incremento <= ultimo)
    {
        printf("%d", incremento);
        incremento += intervalo;
        contador = (contador == quebra-1) ? 0 : contador+1;
        printf("%s", !contador ? "\n" : " ");
        
        sequencia(quebra, ultimo, intervalo, incremento, contador);
    }
    return;
}

int main() {
    
    int quebra_de_linha;
    int ultimo_numero, intervalo;
    
    scanf("%d%d%d", &quebra_de_linha, &ultimo_numero, &intervalo);
    
    sequencia(quebra_de_linha,ultimo_numero, intervalo, 1, 0);
    
	return 0;
}
