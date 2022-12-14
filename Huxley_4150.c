#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//4150 - Posição no plano cartesiano
//https://thehuxley.com/problem/4150

int main() 
{
    int X, Y;
    scanf("%d%d ", &X, &Y);
    
    char pos = getchar();
    
    if(pos == 119) ++Y;
    if(pos == 115) --Y;
    if(pos == 97) --X;
    if(pos == 100) ++X;
   
    else if( pos != 97 && pos != 119 && pos!= 100 && pos != 115)
    {
        printf("Direcao invalida");
        return 0;
    }    
    printf("Nova posicao: %d %d\n", X, Y, pos);
        
    
    
    
	return 0;
}
