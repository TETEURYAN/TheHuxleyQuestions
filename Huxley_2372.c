#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Numeros pares
int main() 
{
    int num;
    int i = 0;
    while(scanf("%d", &num) != EOF)
    {
        if(!(num%2))
        {
            i += (num == 2) ? 0 : 1;
        }
    }
    
    printf("%d\n", i);
	return 0;
}