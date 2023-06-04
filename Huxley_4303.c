#include <stdio.h>
#include <math.h>

//4303 - Cadeia de Snappers
//https://thehuxley.com/problem/4303

int main()
{
    int t, n, solve, i = 1;
    scanf("%d", &t);

    while (scanf("%d %d", &n, &solve) == 2)
    {
        int ans = 0;
        if (solve % (int)pow(2, n) == pow(2, n) - 1)
            ans = 1;
        printf("Caso #%d: ", i++);
        printf("%s\n", ans ? "ON"  : "OFF");
    }
    return 0;
}
