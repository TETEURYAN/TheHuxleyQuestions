#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//3168 - Ternário
//https://www.thehuxley.com/problem/3168
int main() {
    int a,b,c;
    scanf("%i%i%i", &a, &b, &c);
    printf("%d", (c>a) ? 2*a : 3*b );
	return 0;
}
