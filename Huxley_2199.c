#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//2199 - BRINCADEIRA NO IC
//https://thehuxley.com/problem/2199
long int fatorial (int n)
{
  if(n <= 1)
{
  return 1;
}
  return n * fatorial(n-1);
}

int logaritmo(int num)
{
  if(num <= 2) 
    return 0;
  return 1+ logaritmo(num/3);}

int main()
{int num;scanf("%d", &num);printf("%li\n",fatorial(logaritmo(num)));return 0;}
