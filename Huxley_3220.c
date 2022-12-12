#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//3220 - Inverte número de 5 dígitos
//https://thehuxley.com/problem/3220

int main() 
{
    int num;
    scanf("%d", &num);
    
    while(num > 0)
    {
        printf("%d", num%10);
        num /= 10;
    }
	return 0;
}
