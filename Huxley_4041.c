#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//4041 - Crazy tournament

int entrada(int i, char *winner, double maior)
{
    if( i >= 0)
    {
        char nickname[21];
        gets(nickname);
        
        int torcida;
        scanf("%d\n", &torcida);
        
        int titulares;
        scanf("%d\n\n\n", &titulares);
        
        double vencedor = (titulares * 3.75) + (torcida * 0.001);
        
        if(vencedor > maior)
        {
             maior = vencedor;
             return entrada(--i, nickname, maior);
        }
        
        return entrada(--i, winner, maior);
    }
    else printf("O grande vencedor foi %s\n", winner);
}

int main()
{
    int num;
    scanf("%d\n", &num);
    
    char winner[50];
    entrada(num,winner, 0.0);
    
	return 0;
}
