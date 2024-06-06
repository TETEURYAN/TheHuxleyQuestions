#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//4088 - ROCK IN AL
int main() {

    int banda1, banda2, banda3, soma;

    scanf("%i %i %i", &banda1, &banda2, &banda3);

    banda1 *= 0.65;
    banda2 *= 0.75;
    banda3 *= 0.80;
     
    soma = banda1 + banda2 + banda3;

    printf("%i\n", soma);
    if(banda1>banda2 && banda1>banda3){
        printf("Melhor -> Coldplay\n");
    }
        else if(banda2>banda1 && banda2>banda3){
        printf("Melhor -> Dua Lipa\n");
        }
        else if(banda3>banda1 && banda3>banda2){
        printf("Melhor -> Imagine Dragons\n");
        }

    if(banda1<banda2 && banda1<banda3){
        printf("Pior -> Coldplay\n");
    }
        else if(banda2<banda1 && banda2<banda3){
        printf("Pior -> Dua Lipa\n");
        }
        else if(banda3<banda1 && banda3<banda2){
        printf("Pior -> Imagine Dragons\n");
        }

	return 0;
}
