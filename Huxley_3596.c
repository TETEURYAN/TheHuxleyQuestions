#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//3596 - DOMINO
int main()
{
    int pedra, total;
    scanf("%d", &pedra);
    total = ((pedra+1)*(pedra+2))/2;
    printf("%d\n", total);

    return 0;
}
