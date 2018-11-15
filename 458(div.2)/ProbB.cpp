#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;	cin>>n;
	int A[n];
	map < int,int  > mp;
	map < int,int  > :: iterator it;
	for(i=0;i<n;i++)
	{
		cin>>A[i];
		mp[A[i]]++;
	}
	int ans=0;
	it=mp.end();
	it--;
	for(;it!=mp.begin();it--)
	{
		if(it->second %2)
		{
			ans=1;
			break;
		}
	}
	if(it->second %2)
	{
		ans=1;
	}
	if(ans)	cout<<"Conan\n";
	else	cout<<"Agasa\n";
}
