#include <stdio.h>

//675 - Ambrósio Pescador
//https://thehuxley.com/problem/675

int main()
{
  int x1, y1, x2, y2, s, x3, y3;
  while (scanf("%d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &s, &x3, &y3) != EOF)
  {
        if(s)
        {
            if(x1 <= x3 || x2 <= x3) printf("S");
            else printf("N");
            
        }
        if(!s)
        {
            if(x1 >= x3 || x2 >= x3) printf("S");
            else printf("N");
        }
    }
  
  return 0;
}
