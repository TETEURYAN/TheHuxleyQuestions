#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//4005 - Recanto lenhoso em perigo!
int main() {
    int a,b,c,d,e,num;

    scanf("%i %i %i %i %i",&a,&b,&c,&d,&e);
    num = (a*10000) + (b*1000) + (c*100) + (d*10) + e;
    
    
    if( a==e && b==d) {
        printf("Feldspato, de um esporro no Gabro por mim");
    }
    
    else if(num%2 == 0 && num%7 != 0){
        printf("Feldspato, va para Gemeo Calido");
    }
    
    else if(num%2!=0 && num%7==0){
        printf("Feldspato, va para Gemeo Cinzento");
    }
    
    else if(num>=50000 && num <=99999){
        printf("Feldspato, va para Vale Incerto");
    }    


    else if(num>=100 && num <=49999){
        printf("Feldspato, va para Profundezas do Gigante");
    }
    
    else if(num>0 && num <3){
        printf("Feldspato, va para Abrolho Sombrio");
    }
    
    else{
        printf("Feldspato, foi um erro de leitura");
    }
    
   return 0;
}
