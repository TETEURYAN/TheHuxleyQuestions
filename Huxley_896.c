#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//896 - 0 to 10
void repete(){
    int num;
    scanf("%i", &num);
    printf("Informe uma nota entre 0 e 10:\n");
    if(num<=10 && num>=0) return 0;
    else printf("Valor invalido\n");
        
    repete();
}

int main() {
    int num;
    
    repete();
	  return 0;
}

