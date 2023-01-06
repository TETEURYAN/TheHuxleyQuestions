#include <stdio.h>

//3907 - P3

void solve(int num)
{
    for(int i = 0; i < num; i++)
    {
        for(int j = 0; j < i; j++)
            printf("* ");
        printf("\n");    
    } 
    
    for(int i = 0; i < num; i++)
    {
        for(int j = i; j < num; j++)
            printf("* ");
        printf("\n");    
    } 
}

int main() 
{
    int num;
    scanf("%d", &num);
    solve(num);
	return 0;
}
