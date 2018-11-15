#include<bits/stdc++.h>
using namespace std;
int main()
{
	int c,v0,v1,l,a;	
	cin>>c>>v0>>v1>>a>>l;
	int ans=0;
	while(c>0)
	{
		if(v0<v1)
			c=c-v0;
		else
			c=c-v1;
		v0=v0+a;
		if(c>0)
			c=c+l;
		ans++;
	}
	cout<<ans<<endl;
}
