#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//2325 - DIVISIVEL
int main() {
    int n1, n2;
    
    scanf("%i%i", &n1, &n2);
    printf("%s", (n1%n2 == 0) ? "divisivel" : "nao divisivel");
	return 0;
}
