#include <stdio.h>
#include <string.h>
#include <math.h>

//3886 - NASA
//https://thehuxley.com/problem/3886

void printa_peso( int i, double gravidade[], double peso)
{
    if( i < 11)
    {
        printf("%.2lf\n", gravidade[i] * (peso/9.8));
        printa_peso(++i, gravidade, peso);
    }
    return;
}

int main() {
    double gravidade[] = {273.42,3.78,8.6,9.8,3.72,24.8,10.5,8.5,10.8,5.88,1.67};
   
    double peso;
    
    scanf("%lf", &peso);
    
    printa_peso(0,gravidade, peso);
    
	return 0;
}