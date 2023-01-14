#include <stdio.h>
#include <string.h>

//3735 - Viciada em 'a'
//https://thehuxley.com/problem/3735

int main() 
{
    char frase[21];
    
    scanf("%s", frase);
    
    int c = 0;
    for(int i=0; i < strlen(frase); i++ )
    {
        if(frase[i] == 'a')
        {
            c++;
            if((i > 0 && frase[i - 1] == 'i' && frase[i-2] != 'a') || i < 21 && frase[i + 1] == 'i') c++;
        }
    }
    printf("%d", c);
  
	return 0;
}
