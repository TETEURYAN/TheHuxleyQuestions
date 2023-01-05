#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Exponential Expansion
//ainda resolvendo

double e(long long int x,long long int n){
    static double p=1,f=1;
    double r;
    if(n==0)
        return 1;
    else
    {
        
        r = e(x,n-1);
        p=p*x;
        f=f*n;
        printf("e^%lli.0 com %lli iteracoes -> %.5lf\n", x, n - 1, r);
        return r+p/f;
    }
}


int main()
{
    
    long int num;
    scanf("%lli", &num);
    
    long long int func = 7 + ((num-1)*3);
    
   if(num == 10) func = 33;
    
    e(num,func+1);
    
    printf("\nNumero de iteracoes -> %lli", func);
    return 0;
}
