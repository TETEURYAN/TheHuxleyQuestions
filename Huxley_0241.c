#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//0241 - Where is the marble?
//https://thehuxley.com/problem/241

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

void input_array(int *array, int tam)
{
    for(int i = 0; i < tam; i++)
        scanf("%d", &array[i]);
}

void find_number(int *array, int tam, int consul)
{
    int number;
    for(int i = 0; i < consul; i++)
    {
        int found = 0, pos;
        scanf("%d", &number);

        for (int i = 0; i < tam; i ++)
        {
            if (array[i] == number)
            {
               pos = i + 1; found ++;
              break;
            }
            if (array[i] > tam) break;
        }
        
            if (found > 0)
      {
        printf("%d found at %d\n", number, pos);
      }
      else
      {
        printf("%d not found\n", number);
      }
        
    }
    
}

void solve(int tam, int consul)
{
    int array[tam];
    input_array(array, tam);
    
    bubbleSort(array, tam);
    
    find_number(array, tam, consul);
        
}

int main() 
{
    int tam;
    int consul;
    int i = 1;
    while(scanf("%d %d", &tam, &consul) && !(!tam && !consul))
    {
        printf("CASE# %d:\n", i);
        solve(tam, consul);
        i++;
    }
	return 0;
}
