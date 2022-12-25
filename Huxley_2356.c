#include <stdio.h>
#define MAX 10001

//2356 - Roller coaster at Del Perro Pier
//https://thehuxley.com/problem/2356

void insert(int array[], int *i)
{
    int num;
    scanf("%d", &num);
    if(num != -1)
    {
        array[*i] = num;
        *i += 1;
        insert(array, i);
    }
    else return;
}

void solve(int array[], int i, int j, int num_request)
{
    if( i < j)
    {
        if(array[i] == num_request)
        {
            printf("O bilhete sorteado e o %d e esta no carrinho %d", num_request, i+1);
            return;
        }
        solve(array, ++i, j, num_request);
    }
    else printf("Nenhum carrinho foi sorteado");
}
int main() 
{
    int array[MAX], i = 0;
    insert(array, &i);

    int num_request;
    scanf("%d", &num_request);
    
    solve(array, 0, i, num_request);
    
	return 0;
}
