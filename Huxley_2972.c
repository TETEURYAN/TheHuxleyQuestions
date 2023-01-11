#include <stdio.h>
#include <math.h>

//2972 - Notação científica
//https://thehuxley.com/problem/2972

void solve( int *i, long long int num)
{
    while(num >= 10)
    {
        num /= 10;
        *i = *i + 1;
    }
}

int main() 
{
    unsigned long long num;
    scanf("%llu", &num);
    
    int i = 0;
    solve(&i, num);
    
    printf("%d", i);
	return 0;
}
