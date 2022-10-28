#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//1100 - Trunk volume of a pyramid
//https://www.thehuxley.com/problem/1100
int main() {
    float volume, bmaior, bmenor, ladomaior, ladomenor, altura;
    scanf("%f%f%f", &altura, &ladomenor, &ladomaior);  
    bmenor = pow(ladomenor,2);
    bmaior = pow(ladomaior,2);
    volume = (altura/3) * (bmaior + bmenor + sqrt(bmaior*bmenor));
    printf("%.1f", volume);
	return 0;
}
