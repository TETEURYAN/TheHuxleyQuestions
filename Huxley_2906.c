#include <stdio.h>
#include <iso646.h>

void printscore(int titan, int warrior)
{
    if(titan > warrior)
        printf("Comandante, a operacao falhou!\naltura alcancada pelo soldado: %d\n", warrior);
    
    else
        printf("Capturamos ele, comandante!\naltura alcancada pelo tita: %d\naltura alcancada pelo soldado: %d", titan, warrior);
}

void solve(int titan, int warrior)
{
    int i = 0;
    int b = warrior;
    int a = titan;
    titan += 5;

    for( i = 0; ; i++)
    {
        if(titan >= 50 or warrior > titan) break;
        warrior += b, titan += a;
    }
    printscore(titan, warrior);
}

int main(void) 
{
    int titan, warrior;
    scanf("%d %d", &titan, &warrior);
    solve(titan, warrior);
}
