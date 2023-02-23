#include <stdio.h>
#include <string.h>

//247 - Inverse string
//https://www.thehuxley.com/problem/247?quizId=7857

int inverte( char str[], int i)
{
    if(i == 0)
    {
        printf("\n"); return 0;
    }
    else printf("%c", str[i-1]);
    return inverte(str, i-1);
}

int main()
{
    int i, tamanho;
    char str[200];
    
    gets(str);
    tamanho = strlen(str);
    inverte(str, tamanho);
}
