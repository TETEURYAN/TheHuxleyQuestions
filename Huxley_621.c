#include <stdio.h>

//621 - Equação da Reta
//https://thehuxley.com/problem/621

void equacao(float a, float b, float c)
{
    if(!(!b)){ a /= b; c /= b; b /= b;}
    else{ c /= a; a /= a; }
    printf("(%.2fx) + (%.2fy) + (%.2f) = 0\n", a, b, c);
    
    return;  
}

int main()
{
  int x1, y1, x2, y2;
  scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
  
  equacao(((y2 - y1) * (-1)),((x2 - x1)),(((x1 * (y2 - y1) * (-1)) + (y1 * (x2 - x1))) * (-1)));
  
 
  return(0);
}
