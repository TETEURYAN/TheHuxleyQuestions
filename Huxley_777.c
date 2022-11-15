#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//777 - Análise de molde do DNA
//https://thehuxley.com/problem/777

int check( char DNA[], int i)
{
    if( i < 30)
    {
        if( DNA[i] == 'T')
        {
            return 1 + check(DNA, i+1);
        }
        return check(DNA, i+1);
    }
    return 0;
}

void entrada(int maior, int presenca)
{
    char DNA[30];
    int codigo;
    
    
    scanf("%d", &codigo);
    
    if(!(!codigo))
    {
        getchar();
        
        scanf("%[^\n]", &*DNA);
        
        if( check(DNA,0) >  maior)
        {
            maior = check(DNA,0);
            presenca = codigo;
            
        }
        entrada(maior, presenca);
    }
    else
    {
        printf("%d\n", presenca); return;
    }
    
}

int main()
{
  entrada(0,0);
  return(0);
}
