#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//2141 - CARACTERES IMPARES
void par(char par[]){
    for (int i = 1; i < 8; i++){
        if (i % 2 != 0) printf("%c", par[i-1]);}
    printf("\n");
}

int main()
{
    char letrar[8];
    scanf("%s", letra);
    par(letra);
    return 0;
}
