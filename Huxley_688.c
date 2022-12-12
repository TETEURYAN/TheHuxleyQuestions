#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//688 - Existe solução?
//https://thehuxley.com/problem/688

int mdc(int n1,int n2){
    if(n2==0) return n1;
    return mdc(n2,n1%n2);
}

int main() 
{
    int a, b, c;
    
    scanf("%d%d%d", &a, &b, &c);
    
    printf("%c\n", !(c % mdc(a,b)) ? 'S' :'N');
	return 0;
}
