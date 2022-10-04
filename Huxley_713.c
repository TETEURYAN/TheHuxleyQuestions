#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//713 - MÚLTIPLOS DE N EM UM INTERVALO
int divisao(int num, int primeiro, int segundo, int i){
    int resto;
    resto = i%num;
    
    if(num>primeiro && num>segundo)
        printf("INEXISTENTE");
    else{    
    if(resto==0 && i>=primeiro)
    {
        printf("%i\n",i);
    }
    if(i>=segundo){
         return 0;
        }
      
    
    else
    return divisao(num, primeiro, segundo,i+1);}
}

int main() {
    int num, primeiro, segundo, i;
    scanf("%i%i%i", &num, &primeiro, &segundo);
    divisao(num, primeiro, segundo,1);
	return 0;
}
