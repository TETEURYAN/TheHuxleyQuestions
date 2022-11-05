#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//2226 - Oh No!
//https://thehuxley.com/problem/2226
void tipo( int valor){
    printf("%s\n", valor == 1 ? "Life Mushroom" : valor == 2 ? "Fire Flower" : valor == 3 ? "Boost Star" : "Mega Mushroom");
}

int main() {
    int valor;
    scanf("%d", &valor);
    tipo(valor);
	return 0;

}
