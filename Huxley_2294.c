#include<stdio.h>
#include<string.h>

//2294 - Remove repeated char
//https://thehuxley.com/problem/2294

void main(){
    char text[51];
    fgets(text, 51, stdin);

    int tam = strlen(text);
    
    char prev = '\0';
    int k = 0;
    for (int i = 0; i < tam; i++)
    {
        if (prev != text[i])
            text[k++] = text[i];
        prev = text[i];
    }
    text[k] = '\0';
    
    puts(text);
}
