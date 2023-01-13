#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//2526 - MP IP-EC 2019.1
//https://thehuxley.com/problem/2526

void swap(int *ap, int *bp){
      int temp = *ap;
      *ap = *bp;
      *bp = temp;
}

void bubbleSort(int arr[], int size){
      int i,j;
      for(i = 0; i < size; i++)
      {
            for(j = 0; j < size-i-1; j++)
            {
                  if(arr[j] > arr[j+1]) swap(&arr[j], &arr[j+1]);
            }
      }
}

int printa_array(int array[], int i, int tam)
{
    if(!tam) return;
    if(array[0] > -1) printf("%d ", array[0]);
    for(int i = 1; i < tam; i++)
    {
        
        if(array[i] != array[i-1])
            printf("%d ", array[i]);
    }
}

void input_array_pointer( int i, int array[], int *count)
{
    int num;
    while(scanf("%d", &num) && num > -1)
    {
        array[i] = num;*count+= 1;
        i++;
    }
}

void printa_interseccao(int *array1,int *array2,int *pc,int tam_array1,int tam_array2, int *count){

  for(int i=0; i<tam_array1; i++)
  {
    if(array1[0] == array2[0] && array1[0] == 0 && i == 0) printf(" %d",0);
    for(int k=0; k<tam_array2; k++)
    {
        if(*(array1+i) == *(array2+k) && *(array1+i) != *(array2+k-1) && *(array1+i) != *(array1+(i-1)))
        {
            *(pc+i)=*(array1+i);
            printf(" %d",*(pc+i));
            *count += 1;
        }
    } 
  }
}

void solve()
{
    int array1[100];
    int array2[100];
    int array_interseccao[100];
    int count = 0;
    
    printf("Digite o vetor 1: \nDigite o vetor 2: \n\n");
    
    input_array_pointer(0, array1, &count);
    bubbleSort(array1, count);
    int countFirst = count;
    
    printf("Vetor 1 (ordenado): ");
    printa_array(array1, 0, count);
    
    printf("\n");
    count = 0;
    
    input_array_pointer(0, array2, &count);
    bubbleSort(array2, count);
    int countSecond = count;
    
    printf("Vetor 2 (ordenado): ");
    printa_array(array2, 0, count);
    
    count = 0;
    printf("\nVetor interseção (ordenado):");
    printa_interseccao(array1, array2, array_interseccao, countFirst, countSecond, &count);

}

int main()
{
    solve();
}
