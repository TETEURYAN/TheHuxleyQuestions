#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

//4251 - Perfect age
//https://www.thehuxley.com/problem/4251

bool prime(int n, int div){
    if(n < 2) return false;
    if(div > sqrt(n)) return true;
    if(n % div == 0) return false;
    else prime(n, div+1); 
}

void solve(int n, int ans1, int ans2, int i)
{
    for(int i = 0; i < n; i++)
    {
        int a; scanf("%d\n", &a);
        if(a>ans1) ans1 = a;
        if(a < ans2) ans2 = a;
        solve(n, ans1, ans2, ++i);
    }
    
        if(prime(ans1-ans2, 2))
            printf("As idades %d %d sao perfeitas\n", ans2, ans1);
        else printf("As idades %d %d nao sao perfeitas\n", ans2, ans1);    
    
}

int main() 
{
    int n;scanf("%d", &n);
    solve(n,0,INT_MAX);
	return 0;
}
