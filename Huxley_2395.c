#include <stdio.h>
#include <string.h>
#include <iso646.h>
#include <stdlib.h>

//2395 - E/S CPF
//https://thehuxley.com/problem/2395

void input_string(char *nickname, int i, int tam) 
{
    char c = getchar();
    if(c == '\n' or i == tam) nickname[i] = '\0';
    else 
    {
        nickname[i] = c;
        input_string(nickname, i + 1, tam);
    }   
}

int convert(char *string, int tam, int j)
{
    for(int i = j; i < tam; i++)
        printf("%c", string[i]);
    printf("\n");
}

void solve( char *cpf)
{
    convert(cpf, 3, 0);
    convert(cpf, 7, 4);
    convert(cpf, 11, 8);
    convert(cpf, 14, 12);
}

int main() 
{
    char cpf[15];
    input_string(cpf, 0, 15);
    solve(cpf);
    
	return 0;
}
