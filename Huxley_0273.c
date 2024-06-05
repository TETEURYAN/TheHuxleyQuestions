#include <stdio.h>

int media(int x, int y)
{
    return (x + y ) / 2;
}

int main()
{
    int x, y, m;

    scanf("%i %i %i", &x, &y);

    m = media(x, y);

    printf("%d", m);

    return 0;
}
