#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//3251 - Operação Simples
//https://thehuxley.com/problem/3251

void input_array(double array[])
{
    for(int i = 0; i < 5; i++)
        scanf("%lf", &array[i]);
}

double conta(int array[])
{
    return (array[0]+array[1]+array[2])/(array[3]+array[4]);
}

int main() 
{
    double array[5];
    input_array(array);
    
    double resultado = conta(array);
    
    printf("%.2lf", (array[0]+array[1]+array[2])/(array[3]+array[4]));
	return 0;
}
