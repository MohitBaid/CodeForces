#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000009
int main()
{
	int t,l,r,i;		cin>>t>>l>>r;
	long long int ans=0;
	long long int p=1;
	if(l>4)
	{
		for(i=l;i<=r;i++)
		{
			ans+=((p)*(i-1))%MOD;
			p=p*t%MOD;
		}
	}
	else
	{
		if(l==2)
		{
			ans+=1+3*t;
			p=(t*(t%MOD)%MOD);
		}
		else if(l==3)
		{
			ans+=3;
			p=t;
		}
		for(i=4;i<=r;i++)
		{
			ans+=((p)*(i-1))%MOD;
			p=p*t%MOD;
		}
	}
	cout<<ans<<endl;
}
