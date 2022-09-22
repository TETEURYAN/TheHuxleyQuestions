#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//508 - CORRIGINDO PROVAS
int main() {

    int tota_segundos,s1,s2,s3,s4,s5, resto,
    media, hora, minutos,segundos;

    scanf("%i%i%i%i%i", &s1,&s2,&s3,&s4,&s5);

    media = (s1+s2+s3+s4+s5)/5.0;

    printf("%.0d\n", media);

    hora = (int) (media/36); 
    
    resto = (media*100) % 3600;
    
    minutos = resto/60;
    
    segundos = resto % 60;
    
    printf("%.0d\n%.0d\n%0.d", hora,  minutos,segundos);

	return 0;
}
