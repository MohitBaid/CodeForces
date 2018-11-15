#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll i,j,k;
	ll w,l;
	cin>>w>>l;
	ll a[w],s=0;
	for(i=0;i<w-1;i++)
	{
		cin>>a[i];
	}
	ll mi = 100000000000;
	for(i=0;i<l;i++)
	{
		s+=a[i];
	}
	mi = min(mi,s);
	for(i=l;i<w-1;i++)
	{
		s = s - a[i-l];
		s = s + a[i];
		mi = min(mi,s);
	}
	cout<<mi<<endl;
}
