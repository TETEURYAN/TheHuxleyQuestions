#include<stdio.h>
#include<stdbool.h>
#include<iso646.h>
#include<math.h>

void sorting(int *array, int right, int mid, int left){
    int i, j, k;
    int fim1 = 0, fim2 = 0;
    int tam = left-right+1;
    int aux1 = right;
    int aux2 = mid+1;

    int *temp = (int *) malloc(tam*sizeof(int));
    if(temp not_eq NULL)
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
                if(not fim1) temp[i] = array[aux1++];
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

void putarray(int *array, int tam)
{
    for(int i = 0; i < tam; i++ )
        scanf("%d", &array[i]);
}

void printarray( int *array, int tam)
{
    for(int i = 0; i < tam; i++ )
        printf("%d ", array[i]);
}

void removed(int * array, int * tam, int i)
{
    for(; i < *tam; i++)
        array[i] = array[i + 1];
    *tam = *tam -1;    
}

void rempeat(int * arr, int * tam)
{
    for( int i = 0; i < *tam; i++ )
    {
        for( int j = i + 1; j < *tam; )
        {
            if( arr[j] == arr[i] )
            {
                removed(arr, tam, j);
                *tam = *tam - 1;
            }
            else j++;
        }
    }
}

void intersec(int * arr1, int tam_arrayOne, int * arr2, int tam_arrayTwo, int * intersec, int * tam_intersec)
{
  int o = 0;
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

void concater(int arrayOne[],int tamOne, int arrayTwo[],int tamTwo,int arrauTrhee[])
{
    int i;
    for(i=0;i < tamOne;i++)
    {
        if(i < tamTwo)
            arrauTrhee[i]=arrayOne[i];
        else
            arrauTrhee[i] = arrayTwo[i-(tamTwo)];
    }
}    

int initar(int *array)
{
    return array[0];
}

int endar(int * array)
{
    int tam = sizeof(array)/sizeof(int);

    return array[tam-1];

}

int toint(char *string)
{
    int tam = strlen(string);
    int num = 0;

    for(int i = 0; *(string+i) not_eq '\0' ; i++, tam--)
		num += (((long long int)*(string+i)) - '0')*pow(10,tam-1);
    return num;
}

void copy(int * array, int * copia, int tam)
{
    for(int i = 0; i < tam; i++)
        copia[i] = array[i];
}

int search(int *original, int elem, int left)
{
    int rigth = 0;
    int mid = (left + rigth)/2;

    int *copia = (*int) calloc(left,sizeof(int));
    copy(original, copia, left);
    sort(copia, 0, left);

    while(rigth <= left)
    {
        if(elem == copia[mid])
        {
            free(copia);
            return true;
        }
        else
        {
            if(elem < copia[mid])
                left = mid -1;
            else
                rigth = mid +1;
        }
        mid = (left + rigth)/2;
    }
<<<<<<< HEAD
    free(copia);
    return false;
}
=======
  
       return -1;
}

void sorting(int *array, int right, int mid, int left){
    int i, j, k;
    int fim1 = 0, fim2 = 0;
    int tam = left-right+1;
    int aux1 = right;
    int aux2 = mid+1;

    int *temp = (int *) malloc(tam*sizeof(int));
    if(temp not_eq NULL)
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
>>>>>>> 21292cc8c55d1544fa750e627d331f3c6aac71fe
