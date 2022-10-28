#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//3406 - Divisors of number
//https://www.thehuxley.com/problem/3406
int main() {
    int num, i, resto;
    scanf("%d", &num);
    
    for(i = 1; i<num+1; i++){
        resto = num%i;
        if(resto == 0){
            printf("%d\n", i);
        }
    }
	return 0;
}
