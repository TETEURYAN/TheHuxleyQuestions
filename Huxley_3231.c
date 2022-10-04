#include <stdio.h>
//3231 - DIVISIBILIDADE
int main()
{
    int num;
    scanf("%d", &num);
    if (num % 4 == 0 && num % 7 == 0 && num % 5 != 0)
    {printf("sim\n");}
    else{printf("nao\n");}
    return 0;}
