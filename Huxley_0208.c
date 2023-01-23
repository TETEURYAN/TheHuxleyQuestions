#include <stdio.h>
#include <math.h>

//208 - Selos
//https://thehuxley.com/problem/208

int main()
{
  long long int selos; int razao;
  
  scanf("%Ld\n", &selos);

  for (razao = 2; razao < sqrt(selos); razao ++)
  {
    if (selos % razao == 0)printf("S\n");return 0;
  }
  printf("N\n");
  return(0);
}
