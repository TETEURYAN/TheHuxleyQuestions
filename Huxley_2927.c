#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//2927 - The Josue's twin cousins
//https://thehuxley.com/problem/2927

long long int primo(long long int n, long long int div){
    if(n < 2) return 0;
    if(div > sqrt(n)) return 1;
    if(n % div == 0) return 0;
    else primo(n, div+1); 
 
}

long long int max(long long int num1, long long int num2)
{
    return (num1 > num2) ? (num1 - num2) : (num2 - num1);
}

int main() 
{
    long long int num1, num2;
    scanf("%lli %lli", &num1, &num2);
    
    if(primo(num1,2) && primo(num2,2) && max(num1,num2) == 2) printf("Sao gemeos!");
    else printf("Nao sao gemeos!");
	return 0;
}
