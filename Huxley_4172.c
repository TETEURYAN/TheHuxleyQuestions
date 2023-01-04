#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fatorial (int n) 
{
	if (n == 0) return 1;
	else return (n * fatorial(n - 1));
}

int main() 
{
    int n, k;
    scanf("%d %d", &n, &k);
    
    printf("%d", (fatorial(n))/(fatorial(k)*(fatorial(n-k))));
	return 0;
}
