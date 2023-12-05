#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;    
int n,c,t,a[1000005];

//3215 - AJA Café
//https://thehuxley.com/problem/3215

bool check(ll mid)
{
	ll mx=mid,s=0,cnt=1;
	for(int i=1;i<=n;i++)
	{
		if(a[i]>mx) return 0;
		s+=a[i];
		if(s>mx){cnt++;s=a[i];}
	}
	return (cnt<=c);
}
int main()
{
    cin>>c>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    long long l=1,r=20000000000;
    while(l<r)
    {
		long long mid=(l+r)>>1;
    	if(check(mid)) r=mid;
		else l=mid+1;
	}
	cout<<l<<endl;
	return 0;
}
