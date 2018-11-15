#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,i;	cin>>n>>x;
	set < int > s,f;
	set < int > :: iterator it;
	int A[n];	
	int ans=0;
	for(i=0;i<=1000;i++)
	{
		f.insert(i);
	}
	for(i=0;i<n;i++)	
	{
		cin>>A[i];		
		if(A[i]==x)		ans=1;
		else	s.insert(A[i]);
	}
	for(it=s.begin();it!=s.end();it++)
	{
		if(f.find(*it)!=f.end())
		{
			f.erase(*it);
		}
	}
	while(1)
	{
		it=f.begin();
		if(*it==x)	break;
		f.erase(*it);	
		ans++;	
	}
	cout<<ans<<endl;
}
