#include<iostream>
#define int long long int
using namespace std;
main()
{
	int n,m;	cin>>n>>m;
	int st = 1,ans = 0;
	while(m--)
	{
		int des ;
		cin>>des;
		if(des >= st)
		{
			ans+=(des-st);
		}
		else
		{
			ans+=(n-st);
			ans+=(des);
		}
		st = des;
		//cout<<ans<<endl;
	}
	cout<<ans<<endl;
}