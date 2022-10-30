#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//3908 - Marquinhos, dattlebayo
//https://thehuxley.com/problem/3908

void input_array(int array[], int i, int tam)
{
  if (i == tam)  return; 
  scanf("%d", &array[i]); 
  input_array(array, i+1, tam);
}

void printa_array(int array[], int ordem[], int i, int tam){
    if(i == tam) return;
    else printf("%i ", array[ordem[i]-1]);
    printa_array(array, ordem, i+1, tam);
}


int batalha(int inimigo[], int ordem[], int energia, int i, int entrada, int soma, double c)
{

    if(i == entrada){
        double razao = entrada;
        printf("Nível de energia: %d", energia);
        //printa_array(inimigo,ordem,0, entrada);
        printf("\n%.2lf%%\n", c/razao*100 );
        printf("%s", (energia+soma) > 20000 ? "Marquinhos é o novo Mestre da Vila da árvore!" : "Continue tentando!");
        
        return 0;
    }
    else{
        if(energia >= inimigo[ordem[i]-1]){energia += (energia - inimigo[ordem[i]-1]); c++;}
        //else soma = 0;
        //printf("N�vel de energia: %d\n", energia+soma);
        //printf("Inimigos derrtados: %.0lf\n", c);
        
    }
    return batalha(inimigo, ordem, energia, i+1, entrada, soma, c);
}


void entradas(int energia)
{
    int entrada;

	scanf("%d", &entrada);
	
	int inimigo[entrada];
    int ordem[entrada];
	input_array(inimigo, 0, entrada);
    input_array(ordem, 0, entrada);
    batalha(inimigo, ordem, energia, 0, entrada,0,0);

}

int main ()
{
	int entrada, energia;

	scanf("%d", &energia);
	
	entradas(energia);
	
	return 0;
}
