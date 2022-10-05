#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//1286 - EUCLIDES
int euclides(int a, int d)
{
    int resto = a % d;
    if (resto == 0)
    {
        return d;
    }
    else
    {
        return euclides(d, resto);
    }}
void chamada(){
    int num1, num2, num;
    num = scanf("%d%d", &num1, &num2);
    if (num == EOF)
    {
        return;
    }
    printf("%d\n", euclides(num1, num2));
    chamada();}

int main()
{
    chamada();
    return 0;
}
