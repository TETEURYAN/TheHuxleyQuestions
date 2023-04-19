#include <stdio.h>
#include <string.h>
#include <math.h>

//446 - Toothbrush
//https://thehuxley.com/problem/446

int main() {
    int num;
    scanf("%d", &num);
    printf("%.2f", ((float)num - (num/3)) * 2.2);
	return 0;
}
