#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//405 - CONTANDO OS DIGITOS PARES
int par(int num, int i){
    int pares;
    if(num==0){
        return i;
    }
    
    else{
       
        if(num%2 == 0){
            i++;
        }
    
  
}
        par(num/10,i);
      
}    
int main() {
    int num;
    scanf("%d", &num);
    printf("%i", par(num,0));
    //par(num,0);
	return 0;
}
