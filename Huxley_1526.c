#include <stdio.h>
#define MAX 10001

//1526 - Lookind a Mark
//https://thehuxley.com/problem/1526

void insert(int array[], int *i)
{
    int num;
    scanf("%d ", &num);
    if(num != 0)
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
            printf("Comunicacao estabelecida");
            return;
        }
        solve(array, ++i, j, num_request);
    }
    else printf("404 not found");
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
