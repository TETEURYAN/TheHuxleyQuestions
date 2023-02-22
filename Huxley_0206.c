#include <stdio.h>
//206 - container transport
int main()
{
    int lc, cc, ac, ln, cn, an;

    scanf("%i%i%i%i%i%i", &lc, &cc, &ac, &ln, &cn, &an);

    printf("%i",(ln/lc) *(cn/cc)*(an/ac));
}
