#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//3557 - integer division quotient
int main() {
    int num1, num2;
    scanf("%i%i", &num1, &num2);
    
    num1 /= num2;
    
    printf("%i", num1);
	return 0;
}
