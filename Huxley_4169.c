#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//4169 - Loja
//https://thehuxley.com/problem/4169

int solve( int livro, int celular, int roupa, char *ultimo_livro, char *ultimo_celular, char *ultimo_roupa, int i)
{
    if( i > 0)
    {
        //printf("%d %d %d\n", livro, celular, roupa);
        char id[21];
        scanf("%s", id);
        
        int id_item;
        scanf("%d", &id_item);
        
        if(id_item == 1 && livro > 0)
        {
            return solve(livro - 1, celular, roupa, id, ultimo_celular, ultimo_roupa, i-1);
        }
        if(id_item == 2 && celular > 0)
        {
             return solve(livro, celular - 1, roupa, ultimo_livro, id, ultimo_roupa, i-1  );
        }
        if(id_item == 3 &&  roupa > 0)
        {
             return solve(livro, celular, roupa - 1, ultimo_livro, ultimo_celular, id, i-1 );
        }
        
        return solve(livro, celular, roupa, ultimo_livro, ultimo_celular, ultimo_roupa, i-1 );
    }
   
    else
   {
    printf("livro %d, %s\n", livro, ultimo_livro);
    printf("celular %d, %s\n", celular, ultimo_celular);
    printf("roupa %d, %s\n", roupa, ultimo_roupa);
   }
    
}

int main() 
{
    int livro, celular, roupa;
    scanf("%d\n%d\n%d\n", &livro, &celular, &roupa);
    
    int input;
    scanf("%d", &input);
    
    char u_livro[20], u_celular[20], u_roupa[20];
    solve(livro, celular, roupa, u_livro, u_celular, u_roupa, input);
    

    
	return 0;
}
