#include <stdio.h>
#include <stdbool.h>

//2909 - Ana Cirandinha
//https://www.thehuxley.com/problem/2909

bool anthor(int arr[], int n)
{
    for (int i = n; i > 0; i--) 
    {
        if (arr[(i%n)]+1 == arr[(i-1)%n] || (arr[i%n] == n && arr[((i-1)%n)] == 1)) continue;
        else return false;
    }
    return true;

}

bool hor(int arr[], int n)
{
    for (int i = 0; i < n; i++) 
    {
        if (arr[(i%n)]+1 == arr[((i+1)%n)] || (arr[i%n] == n && arr[((i+1)%n)] == 1)) continue;
        else return false;
    }
    return true;
}

void inputarr(int * arr, int n)
{
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
}

void  solve(int input)
{
    int n = 0;
    for (int j = 0; j < input; j++) 
    {
        scanf("%d", &n);
        int arr[n];

        inputarr(arr, n);

        printf("%s\n", hor(arr,n) ? "SIM, HORARIO" : anthor(arr, n) ? "SIM, ANTI-HORARIO" : "NAO");

    }
}

void main()
{
    int input;
    
    scanf("%d", &input);

    solve(input);

}
