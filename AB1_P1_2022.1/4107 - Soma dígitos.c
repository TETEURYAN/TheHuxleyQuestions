#include <stdio.h>
int somadigito(int num, int soma)
{ 
    if(num==0)return soma; 
    else soma += num%10; 
    somadigito(num/10,soma);
}

void ler(double a[], int i, int tam)
{ 
    if (i == tam) return; 
    scanf("%lf", &a[i]); 
    ler(a, i+1, tam);
}

int main(){ 
    int n; 
    scanf("%d", &n); 
    double a[n]; 
    ler(a, 0, n); 
    int num; 
    scanf("%i", &num); 
    printf("%i\n", somadigito(a[num],0));
    return 0;
    
}
