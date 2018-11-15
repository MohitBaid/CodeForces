#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,te;	cin>>n;
	set < int > s,ans,temp,ans2,ans3,s2;
	set < int > ::iterator it,jt;
	int d=0;
	for(i=0;i<n;i++)
	{
		cin>>te;
		s.insert(te);
		s2.insert(te);
		if(te==1)	d=1;
	}
	int ch=1;
	it=s.begin();
	int ele=*it;
	for(it=s.begin();it!=s.end();it++)
	{
		if(*it%ele!=0)
		{
			ch=0;
			break;
		}
	}
	if(!ch)	cout<<"-1"<<endl;
	else
	{
		cout<<n*2<<endl;
		for(it=s.begin();it!=s.end();it++)
		{
			cout<<ele<<" "<<*it<<" ";
		}
		cout<<endl;
	}
}
