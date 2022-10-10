#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//2735 - PASSAGEM DE PARAMENTROS
int main() {
    int num1;
    char num2[15];
    float num3;
    scanf("%i%s%f", &num1, &num2, &num3);
    printf("%i\n%s\n%.2f", num1, num2, num3);
	return 0;
}
