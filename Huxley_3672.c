#include <stdio.h>
#include <math.h>

//3672 - Saíram as notas do ENEM
//https://thehuxley.com/problem/3672

int binary_search(int *array, int elem, int left)
{
    int rigth = 0;
    int mid = (left + rigth)/2;

    while(rigth <= left)
    {
        if(elem == array[mid])
        {
            return mid;
        }
        else
        {
            if(elem < array[mid])
            {
                left = mid -1;
            }
            else
            {
                rigth = mid +1;
            }
        }
        mid = (left + rigth)/2;
    }
  
       return -1;
}

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

void find(int consul, int cpf, int *notas, int *array)
{
    for(int i = 0; i < consul; i++)
    {
        int number;
        scanf("%d", &number);
        
        int find = binary_search(array,number, cpf);
        
        //printf("%d\n", find);
        
        if(find == -1) printf("NAO SE APRESENTOU\n");
        else printf("%d\n", notas[find]);
        
    }

}

void solve()
{
    int cpf;
    scanf("%d", &cpf);
    
    int array[cpf];
    for(int i = 0; i < cpf; i++)
        scanf("%d", &array[i]);
        
    int notas[cpf];
    for(int i = 0; i < cpf; i++)
        scanf("%d", &notas[i]);

        
    int consul;
    scanf("%d", &consul);
    
    find(consul, cpf, notas, array);
    
}

int main() 
{
    solve();
	return 0;
}
