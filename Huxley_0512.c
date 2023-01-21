#include <stdio.h>
#include <math.h>

//512 - Decompondo cubos
//https://thehuxley.com/problem/512

void print( int init, int num)
{
    for (int i = 0; i < num; init ++)
    {
      if (init % 2 != 0)
      {
        printf(" %d", init);
        i ++;
      }
    }
}

void solve(int num, int i)
{
    if(num > 0)
    {
        int prime;
        scanf("%d", &prime);
        
        int init = pow(prime,2) - prime + 1;
        printf("caso %d:", i);
        print(init, prime);
        printf("\n");
        solve(--num, ++i);
    }
}

int main() 
{
    int num;
    scanf("%d", &num);
    solve(num, 1);
    
	return 0;
}
