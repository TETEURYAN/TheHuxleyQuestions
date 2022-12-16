#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void solve( int input, double big, int small, double count_big[], double count_small[])
{
        
    if(input > 0)
    {
        double id, age;
        double money;
        scanf("%lf%lf%lf", &id, &age, &money);
        
        if(money>big)
        {
            big = money;
            count_big[1] = age;
            count_big[0] = id;
            count_big[2] = money;
        }
        
        if(age < count_small[1])
        {
            count_small[1] = age;
            count_small[0] = id;
            count_small[2] = money;
        }
        
        solve(--input, big, small, count_big, count_small);
    }
    return;
}

void print_solve(double count_big[], double count_small[])
{
    printf("Maior salario registrado\n");
    printf("ID: %.lf\n", count_big[0]);
    printf("Idade: %.lf\n", count_big[1]);
    printf("Salario: %.2lf\n\n", count_big[2]);
    
    printf("Menor idade registrada\n");
    printf("ID: %.lf\n", count_small[0]);
    printf("Idade: %.lf\n", count_small[1]);
    printf("Salario: %.2lf\n", count_small[2]);
}

int main() 
{
    double count_big[3];
    double count_small[3];
    
    int input;
    scanf("%d", &input);
    
    count_small[1] = 10000;
    
    solve(input, 0, count_small[1], count_big, count_small);
    print_solve(count_big, count_small);
    
	return 0;
}
