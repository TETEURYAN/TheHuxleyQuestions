#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//3688 - Imprimindo Cartazes
//https://thehuxley.com/problem/3688

float grafica_um(int tipo, float tamanho)
{
    tipo = (tipo == 1) ? 2 : 4;
    
    tamanho = (tamanho > 0 && tamanho <= 10) ? tamanho*0.75 : (tamanho > 10 && tamanho <= 30) ? tamanho * 0.45 : tamanho * 0.20;
    float preco_final = tipo + tamanho;
    
    return preco_final;
}

float grafica_dois(int tipo, float tamanho)
{
    tipo = (tipo == 1) ? 6 : 9;
    
    tamanho = (tamanho > 0 && tamanho <= 10) ? tamanho*0.25 : (tamanho > 10 && tamanho <= 30) ? tamanho * 0.15 : tamanho * 0.10;
    float preco_final = tipo + tamanho;
    
    return preco_final;
}

int main() {
    char frase[201];
    int tipo;
    scanf("%d ", &tipo);
    
    scanf("%[^\n]", frase);
    
    float tamanho = strlen(frase);
    
    float preco_um = grafica_um(tipo, tamanho);
    float preco_dois = grafica_dois(tipo, tamanho);
    
    printf("A grafica %d eh a mais em conta\nO preco sera: $%.2f\n", !(preco_um >= preco_dois) ? 1 : 2, !(preco_um >= preco_dois) ? preco_um : preco_dois );
    
  
	return 0;
}
