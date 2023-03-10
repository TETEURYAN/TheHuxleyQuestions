#include <stdio.h>

//493 - Could clima
//https://thehuxley.com/problem/493/

void solve( double low, double count, double sum, double media, int i)
{
    
    if(i < 9)
    {
        double ans;
        scanf("%lf", &ans);
        if (ans < 0) 
            sum += ans,count++;
        if (i == 0) 
            low = ans;
        else if (ans < low) 
            low = ans;
            
        solve(low, count, sum, media, ++i);    
    }
    else printf("%.2lf\n%.2lf\n", low, sum/count);
    
}

void main()
{
    solve(0.0, 0.0, 0.0, 0.0, 0);
}
