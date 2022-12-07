#include <stdio.h>

typedef long long int lli;

lli recursive(int n, int *par, int *impar)
{
    if( n > 0)
    {
        int num;
        
        scanf("%lld", &num );
        (num % 2 == 0) ? (*par+= 1) : (*impar+=1);
        return recursive(--n, par, impar);
    }
}

int main()
{
    lli n, par = 0, impar = 0;
    scanf("%lld", &n);

    recursive(n, &par, &impar);
    printf("%lld\n", par*impar);
    return 0;
}
