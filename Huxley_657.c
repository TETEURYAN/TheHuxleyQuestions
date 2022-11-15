#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//657 - Nlogônia
//https://thehuxley.com/problem/657

void nlogonia(int num, int xCen, int yCen)
{
	if(num > 0)
	{
		int x, y;
		scanf("%d%d", &x, &y);

	  if (x == xCen || y == yCen) printf("divisa\n");
      else if (x > xCen && y > yCen) printf("NE\n");
      else if (x > xCen && y < yCen) printf("SE\n");
      else if (x < xCen && y > yCen) printf("NO\n");
      else printf("SO\n");

	  nlogonia(num-1, xCen, yCen);
	}
	return;
}

void entrada( )
{
	int num;
	scanf("%d", &num);

	if(num != 0 )
	{
		int xCen,yCen;
		scanf("%d%d", &xCen, &yCen);
		nlogonia(num, xCen, yCen);
		entrada();
	}
    
	else return;
}
int main() {

	entrada();

	return 0;
}
