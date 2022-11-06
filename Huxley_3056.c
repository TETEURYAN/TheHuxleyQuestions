#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//3056 - Deslize
//https://thehuxley.com/problem/3056

void input_array(int array[], int i, int tam)
{
  if (i == tam)  return; 
  scanf("%d", &array[i]); 
  input_array(array, i+1, tam);
}

int printa_array(int array[], int i, int tam){
    if(i == tam) return 0;
    if(array[i] == 1 && i != 9) printf("%d ", i);
    printa_array(array, i+1, tam);
}


void zera_array(int array[], int i, int tam)
{
    if( i== tam) return;
    array[ i ] = 0;
    zera_array(array,  i+1, tam);
}

int lado_esquerdo(int picos[], int esquerda[], int i, int contador, int tam)
{
    if(i == tam) return contador;
    else{
        if(picos[i] < picos[i+1]){esquerda[i+1] = 1; contador++;}
        else return contador;
    }
    return lado_esquerdo(picos, esquerda, i+1, contador, tam);
}

int lado_direito(int picos[],int direita[], int i,int j, int c, int tam)
{
  if(i == tam)return c;
  
  else{
      if(picos[j] < picos[j-1]){c++; direita[j-1] = 1;}
      
      if(picos[j] >= picos[j-1]) return c;
  }
   return lado_direito(picos,direita,i+1,j-1,c,tam);
}

int main()
{
    int tam;
    scanf("%i", &tam);
    
    int picos[tam], index_esquerda[tam],index_direita[tam];
    
    input_array(picos, 0, tam);
    zera_array(index_esquerda, 0 , tam);
    zera_array(index_direita, 0, tam);
    lado_esquerdo(picos,index_esquerda,0,0, tam);
    lado_direito(picos,index_direita,1,tam-1,0, tam);
    //array_index_direitaP(picos,index_direita, 0,tam-1,0, tam);
    
    int direcao_esquerda = lado_esquerdo(picos,index_esquerda,0,0, tam);
    int direcao_direita = lado_direito(picos,index_direita,0,tam-1,0, tam);
    if(!direcao_esquerda) printf("Nao ocorreu nenhum desabamento a esquerda\n");
    else printf("Desabamento a esquerda: ");printa_array(index_esquerda, 1, tam);printf("\n");
    
    
    if(!direcao_direita) printf("Nao ocorreu nenhum desabamento a direita\n");
    else printf("Desabamento a direita: ");printa_array(index_direita, 1, tam);
    

  return 0;

}
