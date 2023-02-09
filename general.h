#include<stdbool.h>
#include<iso646.h>
#include<math.h>
#include<stdio.h>

void putarray(int *array, int tam)// Recursive function to input array
{
    for(int i = 0; i < tam; i++ )
        scanf("%d", &array[i]);
}

void printarray( int *array, int tam)
{
    for(int i = 0; i < tam; i++ )
        printf("%d ", array[i]);
}

void remove(int * arr, int * tam, int i)
{
    for(; i < *tam; i++)
        array[i] = array[i + 1];
    *tam = *tam -1;    
}

void removequal(int * arr, int * tam)
{
    for( int i = 0; i < *tam; i++ )
    {
        for( int j = i + 1; j < *tam; )
        {
            if( arr->array[j] == arr->array[i] )
            {
                remove(arr, tam, j);
                *tam = *tam - 1;
            }
            else j++;
        }
    }
}

void intersec(int * arr1, int tam_arrayOne, int * arr2, int tam_arrayTwo, int * intersec, int * tam_intersec)
{
  for(int i=0; i<tam_arrayOne; i++)
  {
    for(int k=0; k < tam_arrayTwo; k++)
    {
        if(arr1[i] == arr2[k] and arr1[i] not_eq arr2[k-1] and arr1[i] not_eq arr1[i-1] )
        {
            *(intersec+o)= arr1[i]; 
            o++;
        }
    } 
  }
  *tam_intersec = o;
}

int toint(char *string)
{
    int tam = strlen(string);
    int num = 0;

    for(int i = 0; *(string+i) !='\0' ; i++, tam--)
		num += (((long long int)*(string+i)) - '0')*pow(10,tam-1);
    return num;
}

int search(int *array, int elem, int left)
{
    int rigth = 0;
    int mid = (left + rigth)/2;

    while(rigth <= left)
    {
        if(elem == array[mid])
            return mid;
        else
        {
            if(elem < array[mid])
                left = mid -1;
            else
                rigth = mid +1;
        }
        mid = (left + rigth)/2;
    }
  
       return -1;
}

void sorting(int *array, int right, int mid, int left){
    int i, j, k;
    int fim1 = 0, fim2 = 0;
    int tam = left-right+1;
    int aux1 = right;
    int aux2 = mid+1;

    int *temp = (int *) malloc(tam*sizeof(int));
    if(temp != NULL)
    {
        for(i=0; i<tam; i++){
            if(not fim1 and not fim2)
            {
                if(array[aux1] < array[aux2]) temp[i]=array[aux1++];
                else temp[i] = array[aux2++];

                if(aux1>mid) fim1 = 1;
                if(aux2>left) fim2 = 1;
            }
            else
            {
                if(!fim1) temp[i] = array[aux1++];
                else temp[i] = array[aux2++];
            }
        }
        for(j=0, k = right; j < tam; j++, k++) array[k] = temp[j];
    }
    free(temp);
}

void sort(int *array, int right, int left)
{
    
    if(right < left)
    {
        int mid = floor((right+left)/2);

        sort(array,right,mid);
        sort(array,mid+1,left);
        sorting(array,right,mid,left);
    }
}
