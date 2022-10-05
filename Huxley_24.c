#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//24 - FATORIAL
int entrada(){
	int num;
	scanf("%i", &num);
	if(num == -1){
		return 0;
	}
	printf("%d\n", Fatorial(num));
	entrada();
}

int Fatorial (int n) {
	if (n == 0) return 1;
	else return (n * Fatorial(n - 1));
}

void main(){
	int num;
	entrada();
}
