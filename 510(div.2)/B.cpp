#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,b,x,y;	cin>>a>>b>>x>>y;
		long long int m = __gcd(x,y);
		x = x/m;
		y = y/m;
		long long int ans = min(1LL*(1LL*a)/(1LL*x),1LL*(1LL*b)/(1LL*y));
		cout<<ans<<endl;
}
