#include <stdio.h>
#include <math.h>
//908 - Quadrado da posição
int print(int a[], int i, int tam){if(i == tam) return 0; else printf("%i\n", a[i]*a[i]); return print(a,i+1,tam);}
void lera(int a[], int i, int tam){ if (i == tam) return; a[i] = i; lera(a, i+1, tam);}
int main() {int a[20];lera(a,0,20);print(a,0,20);return 0;}
