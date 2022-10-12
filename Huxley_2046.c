#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//2046 - SERIE COM FUNÇÕES
int fatorial(int i, int fat, int termos) {
  if (i <= termos){
        if (i == 1){
            fat = 1;
        }
        else{
            fat = i*fat;
        }
    	
    	return fatorial(i+1, fat, termos); 
  } 
  else{
   		 return fat;
	}  
}

int eh_primo(int numero){
        int rest1 = numero%2;
        int rest2 = numero%3;
       
        if (numero == 2 || numero == 3){
            return numero;
        }
        else if (rest1 != 0 && rest2 != 0){
            return numero;
        }
        else if (rest1 == 0 || rest2 == 0){
            numero++;
        }        
       
       return eh_primo(numero);
 
}
 

void serie(int i, int termos,  double soma ) {
    
	double primo = eh_primo(i);
  if( i > termos){ 
 	printf("\n%.2lf\n", soma);
    return;
  }
  else{
  	 soma += fatorial(1, 1, i)/primo;
  	if (i != 1){
   	 printf(" + ");
  	}
    printf("%d!/%0.lf", i, primo);
  } 
  serie(i+1, termos, soma);
}


int main() {
  int num;
  scanf("%d", &num);  
  fatorial(1, 0, num);
  serie(1, num, 0);
  return 0;
}
