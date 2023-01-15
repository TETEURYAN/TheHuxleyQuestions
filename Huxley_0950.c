#include <stdio.h>

//950 - Descriptografia
//https://thehuxley.com/problem/95

void solve(char cod[20])
{
  int par = 0;
  int i;
  
  for (i = 0; i < strlen(cod); i ++)
  {
    if (cod[i] == '*')
    {
      printf("(");
      par++;
    }

    printf("%d", i + 1);
  }

  while (par > 0)
  {
    printf(")");
    par --;
  }

}
int main()
{
  char cod[50];
  gets(cod);

  solve(cod);

  return 0;
}
