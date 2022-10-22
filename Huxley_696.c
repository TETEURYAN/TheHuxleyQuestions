#include <stdio.h>

// 696 - How many times x appeared?

double repetidos(double a[], int i, int j, int tam, int contador)
{ 
  if (tam == 0)
  { 
    printf("%i", j); return 0;
  } 
  else
  {
    if(a[i] == contador) j++ ;
  }
  return repetidos(a, i+1,j, tam-1, contador);
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
  double a[10]; 
  ler(a, 0, 10); 
  int num; 
  scanf("%i", &num); 
  repetidos(a,0,0,10,num);
  return 0;
}
