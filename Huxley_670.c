#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//670 - Angulo entre pontos
//https://thehuxley.com/problem/670

float angulo ( float lado1X, float lado1Y, float lado2X, float lado2Y ) 
{
    float angulo_final = ((lado1X * lado2X) + (lado1Y * lado2Y)) / ((sqrt(pow(lado1X,2) + pow(lado1Y,2))) * (sqrt(pow(lado2X,2) + pow(lado2Y,2))));
    angulo_final =  acos(angulo_final) * 180 / acos(-1);
    return angulo_final;
}
int main()
{
    float ax, ay, bx, by, cx, cy;
    
    scanf("%f %f %f %f %f %f", &ax, &ay, &bx, &by, &cx, &cy);
         
    float angulo_final = angulo(ax - bx,ay - by, cx - bx, cy - by);
    printf("%.2f\n", angulo_final);
    return 0;
}
