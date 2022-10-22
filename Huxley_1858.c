#include <stdio.h>

// 1858 - Biggest and smallest numbers in array

double maior(double a[], int i, int j, int m, int tam)
{ 
  if (tam == 0)
  { 
    printf("%i\n%i",m, j); return 0;
  } 
  else
  {
    if(a[i] > j) j = a[i];
    if(a[i] <m ) m = a[i];
  }
  return maior(a, i+1,j, m, tam-1);
  }
void ler(double a[], int i, int tam)
{
  if (i == tam)  return; 
  scanf("%lf", &a[i]); 
  ler(a, i+1, tam);
}

int main()
{ 
  int n; 
  double a[6]; 
  ler(a, 0, 6); 
  maior(a,0,0,1000,6);
  return 0;
}
