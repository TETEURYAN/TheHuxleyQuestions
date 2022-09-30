#include <stdio.h>
#include <math.h>
//178 - COMETA
int main(void)
{

int tempo,cont=1986;
scanf("%d",&tempo);

if(tempo>=2010 && tempo<=10000)
{
    while(cont<tempo)
    {
      cont=cont+76;
    }
    if(cont==tempo)
    {
      printf("%d\n",cont+76);
      return 0;
    }
    else if(cont>tempo)
    {
      printf("%d\n",cont);
      return 0;}}
else
{
  return 0;
}

}
