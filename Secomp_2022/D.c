#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int n,x,y;
    scanf ("%d %d %d", &n, &x, &y);
    int array[n], i = 0;
    char a[n];
    for (; i < n; i++)
    {
        scanf ("%d", &array[i]);
        a[i] = ((array[i] * x + y) % 127);
    }
        a[n] = '\0';
        printf ("%s\n", a);
    
    return 0;
}