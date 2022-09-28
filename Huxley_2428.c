#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//2428 - INVERSÃO DE NUMERO
int main() {
    double num, div1, div2, div3;
    
    scanf("%lf", &num);
    
    div1 = num/100.0;
    div2 = ((div1 - (int)div1)*10);
    div3 = (int)((div2 - (int)div2)*10);
    
    div1 = (int)div1;
    div2 = (int)div2;
    
    printf("%.0lf%.0lf%.0lf", div3, div2, div1);
	return 0;
}
