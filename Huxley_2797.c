#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//2797 - Zerinho ou um
int main() {
    float a,b,c;
    scanf("%f%f%f", &a, &b, &c);
  
    
    printf("%s", (((a+b+c)>3)||(a>1)||(b >1)||(c>1)) ? "Algum valor digitado e diferente de 0 ou 1." : (((a+b+c) == 3)|| (a+b+c) == 0) ? "*" : (a!=b && a!=c && c==b) ? "A" : (b!=a && b!=c && c==a) ? "B" : "C");
	return 0;
}
