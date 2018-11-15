#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;	cin>>n;
	set < pair < int , pair < int , pair < int , int > > > >s;
	set < pair < int , pair < int , pair < int , int > > > >::iterator it;
	queue < int > q;
	//queue < int > :: iterator jt;
	int t=0;
	long long int ans=0;
	for(i=0;i<n;i++)
	{
		int a,b,c;	cin>>a>>b>>c;
		s.insert(make_pair(c*-1,make_pair(b,make_pair(a,i+1))));
	}
	for(it=s.begin();it!=s.end();it++)
	{
			cout<<it->first<<" "<<it->second.first<<" "<<it->second.second.first<<" "<<it->second.second.second<<endl;
	}
	for(it=s.begin();it!=s.end();it++)
	{
		if(t+it->second.second.first<it->second.first)
		{
			ans+=it->first*-1;
			t+=(it->second.second.first);
			q.push(it->second.second.second);
		}
	}
	cout<<ans<<endl;
	cout<<q.size()<<endl;
	while(q.size())
	{
		cout<<q.front()<<" ";
		q.pop();
	}
}
