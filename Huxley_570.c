#include <stdio.h>
#include <math.h>
 
//570 - Looking for the algarism number
 
int main() {
    int n;
    scanf("%i", &n);
    printf("%i %i %i", n/100, (n/10 - (n/100)*10), n%10);
	return 0;
}
