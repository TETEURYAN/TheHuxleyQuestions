#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//3038 - Bob
//https://www.thehuxley.com/problem/3038
int main() {
    int i,raioA, raioB,entrada;
    scanf("%i", &entrada);
    for( i = 0; i<entrada; i++)
    {
        scanf("%d%d", &raioA, &raioB);
        printf("%i\n", raioA+raioB);
    }
	return 0;
}
