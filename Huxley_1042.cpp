#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//1042 - IDADE EM SEGUNDOS
int main(void) 
{
  int idade, time;
  scanf("%i", &idade);
  time = idade*365*24*60*60;
  printf("%i", time);
  return 0;
}
  