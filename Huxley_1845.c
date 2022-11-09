#include <stdio.h>
#include <string.h>
#include <ctype.h>

//1845 - Inverse name
//https://www.thehuxley.com/problem/1845

int inverte( char str[], int i)
{
    if(i == 2)return 0;
    else printf("%c", str[i-2]);
    return inverte(str, i-1);
}

int main()
{
    int i, tamanho;
    char str[200];
    
    scanf("%s", str);
    tamanho = strlen(str);
    
    for(i=0; i<tamanho; i++)
    {
        str[i] = tolower(str[i]);
    }
    printf("%c", toupper(str[tamanho-1]));
    inverte(str, tamanho);
    printf("%c", toupper(str[0]));
}
