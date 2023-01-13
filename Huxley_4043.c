#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//4043 - Exponential Expansion
//https://thehuxley.com/problem/4043

double e(float x,long long int n, int *inte){
    static double p=1,f=1;
    double r;
    if(n==0)
        return 1;
    else
    {
        
        r = e(x,n-1, inte);
        p=p*x;
        f=f*n;
        printf("e^%.1f com %lli iteracoes -> %.5lf\n", x, n - 1, r);
        *inte = n-1;
        return r+p/f;
    }
}


int main()
{
    
    float num;
    scanf("%f", &num);
    
    float func = 7 + ((num-1)*3);
    int def = (num == 1) ? 1 : num*10;
    
    func = (num > 1 && def%2 != 0) ? ceil(func) : func;
 
    int inte = 0;
    e(num,func+1, &inte);
    
    printf("\nNumero de iteracoes -> %d", inte);
    return 0;
}
