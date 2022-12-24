#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//4168 - Integrando pela Matriz
//https://thehuxley.com/problem/4168

double funcao(double a, double b, double c, int x)
{
    return (a * x * x + b * x + c);
}

void printa_matrix(int matriz[][10])
{
    for (int i = 9; i >= 0; i--) 
    {
        for (int j = 0; j < 10; j++) 
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void count_integral(int tabble[][10], int *integral)
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            *integral += tabble[i][j];
        }    
    }
}
void solve(double a, double b, double c, int tabble[][10])
{
    
    for(int x = 1; x <= 10; x++)
    {
        double valor_funcao = floor(funcao(a, b, c, x));
        int y = valor_funcao;
        //printf("%d ", y);
        if(y > 10)
        {
            y = 10;
        }
        for (int i = 0; i < y; i++) 
        {
          tabble[i][x-1] = 1;
        }
    }
    printa_matrix(tabble);
}

int main() 
{
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    
    int integral[10][10] = {{0}};
    
    solve(a,b,c, integral);
    
    int integracao = 0;
    count_integral(integral, &integracao);
    printf("%d", integracao);
    
    
	return 0;
}
