#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//3772 - SOCORRO DA PROVA
int Fatorial (int n) {
	if (n == 0) return 1;
	else return (n * Fatorial(n - 1));
}
int main() {
    int n;
    scanf("%i", &n);
    printf("%i", Fatorial(n));
	return 0;
}
