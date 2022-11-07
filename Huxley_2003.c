#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//2003 - Eleven
//https://thehuxley.com/problem/2003
int fibo(int numero, int primeiro, int segundo)
{
    if(numero == primeiro) return 1;
    else if(numero<primeiro) return 0;
    else return fibo(numero, segundo, primeiro+segundo);
}

void entrada(int num, int i)
{
    if( i == num + 1) return;
    else{
        printf("%c", fibo(i,1,1) ? 'O' : 'o');
    }
    entrada(num, i+1);
}
int main() {
    int num;
    scanf("%d", &num);
    entrada(num,1);
	return 0;
}
