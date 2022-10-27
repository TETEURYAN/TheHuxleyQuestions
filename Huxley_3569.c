#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// 3569 - 3º angulo do triangulo
int main() {
    float num1, num2;
    scanf("%f%f", &num1, &num2);
    printf("3o angulo=%f", 180 - (num1+num2));
	return 0;
}
