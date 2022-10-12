#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//3794 - CONVERSOR DE IP
int conversor(int primeiro,int segundo,int terceiro,int quarto, int quinto,int sexto,int setimo,int oitavo){
    int soma;
    primeiro = (primeiro) ? 128 : 0;
    segundo = (segundo) ? 64 : 0;
    terceiro = (terceiro) ? 32 : 0;
    quarto = (quarto) ? 16 : 0;
    quinto = (quinto) ? 8 : 0;
    sexto = (sexto) ? 4 : 0;
    setimo = (setimo) ? 2 : 0;
    oitavo = (oitavo) ? 1 : 0;

    soma =  primeiro + segundo + terceiro + quarto + quinto + sexto + setimo + oitavo;

    return soma;
}

int entrada( int entradas){
    int primeiro, segundo, terceiro, quarto, quinto, sexto, setimo, oitavo;
    
    if(entradas == 0) return 0;
    else{
        scanf("%i%i%i%i%i%i%i%i",&primeiro,&segundo,&terceiro,&quarto,&quinto,&sexto,&setimo,&oitavo);
        conversor(primeiro, segundo, terceiro, quarto, quinto, sexto, setimo, oitavo);
        printf("%i",conversor(primeiro, segundo, terceiro, quarto, quinto, sexto, setimo, oitavo) );
        
    }
        if(entradas!=1) printf(".");
    
    return entrada(entradas-1);
}

int main() {
    
    entrada(4);
	return 0;
}
