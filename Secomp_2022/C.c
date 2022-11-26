#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    char n[7];
    scanf ("%s", n);
    int a =(n[0] - '0') + (n[1] - '0') + (n[2] - '0');
    int b = (n[3] - '0') + (n[4] - '0') + (n[5] - '0');
    
    printf("%s\n", (a%7 == 0 && b%2 == 0 ? "YES" :  "NO"));

    return 0;
}