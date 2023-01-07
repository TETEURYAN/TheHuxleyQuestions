#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int maior = 0;
    int controle = 0;
    int num;
    
    while(scanf("%d", &num) && num != 0)
    {
        int array[num];
        for(int i =0; i < num; i++)
        {
            scanf("%d", &array[i]);
            if(array[i] > maior)
              maior =  array[i];
        }   
        
        for(int i = 0; i < num; i++)
            if(array[i] == maior) controle++;
        printf("\n%d %d", maior, controle);
        
        maior = 0;
        controle = 0;
    }
	return 0;
}
