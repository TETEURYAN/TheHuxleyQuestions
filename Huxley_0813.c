#include <stdio.h>

//813 - Macaco Prego
//https://thehuxley.com/problem/813

int max (int A, int B) {return (A > B) ? A : B;}

int min (int A, int B) {return (A < B) ? A : B;}

void Quantity(int num, int *i, int Ye, int Xe, int Yd, int Xd)
{
    int Xmin, Ymin, Xmax, Ymax;
    
    if(num > 0)
    {
      scanf("%d %d %d %d", &Xmin, &Ymin, &Xmax, &Ymax);
      Ye = min(Ye, Ymin); 
      Xe = max(Xe, Xmin); 
      Yd = max(Yd, Ymax); 
      Xd = min(Xd, Xmax); 
      
      Quantity(--num, i, Ye, Xe, Yd, Xd);
    }
    else 
    {
      *i += 1;      
      if (Xe < Xd && Ye > Yd) printf("Teste %d\n%d %d %d %d\n\n", *i, Xe, Ye, Xd, Yd);
      else printf("Teste %d\nnenhum\n\n", *i);
        
    }
}

void solve(int i)
{
    int num;
    scanf("%d", &num);
    int Ye = 10000;
    int Xe = - 10000;
    int Yd = - 10000;
    int Xd = 10000;
    
    if(num != 0)
    {
        Quantity(num, &i, Ye, Xe, Yd, Xd);
        getchar();
        solve(i);
    }
}

int main()
{
    
    solve(0);
}
