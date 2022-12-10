#include <stdio.h>

int seq(int a[], int n, int i)
{
    int resp = 1;
    for (int j = i+1; j < n*2; j++)
    {
        j = ((j % n) + n) % n;
        if (a[j] > a[i])
        {
            i++;
            i = ((i % n) + n) % n;
            resp++;
        } 
        else break;
    }
    return resp;
}

int solve(int a[], int n, int i, int maior)
{
    if (i == n) return maior;
    
    int seqa = seq(a, n, i);

    if (seqa > maior) return solve(a, n, i+1, seq);
    else return solve(a, n, i+1, maior);
}

void read(int arr[], int n, int i) {
    if(i == n) return;
    scanf("%d", &arr[i]);
    read(arr, n, i + 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    
    int a[n];
    read(a,n,0);

    printf("%d\n", solve(a, n, 0, 0));

    return 0;
}