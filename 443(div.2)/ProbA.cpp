#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;	cin>>n;
	int ans=0;
	while(n--)
	{
		int s,d;	cin>>s>>d;
		if(s>ans)
		{
			ans=s;	
		}
		else
		{
			while(s<=ans)
			{
				s=s+d;
			}
			ans=s;
		}
	//	cout<<ans<<endl;
	}
	cout<<ans<<endl;
}
