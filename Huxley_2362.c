#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define pi 3.12159
// 2362 - SEGUNDOS EM UM HORARIO
int main() {
 
    int hora, minutos, segundos;

    scanf("%i%i%i", &hora,&minutos,&segundos);

    hora *= 3600;
    minutos*=60;
    segundos += hora+minutos;

    printf("%i", segundos);

}
