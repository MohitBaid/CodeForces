#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;	cin>>n;
	int A[n];
	set < pair < int , pair < int, int > > >s;
	set < pair < int , pair < int, int > > >:: iterator it;
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
	int prev=A[0],size=1;
	for(i=1;i<n;i++)
	{
		if(A[i]==prev)
		{
			size++;
		}
		else
		{
			s.insert(make_pair(size,make_pair(prev,i-size)));
			prev=A[i];
			size=1;
		}
	}
	s.insert(make_pair(size,make_pair(prev,i-size)));
	for(it=s.begin();it!=s.end();it++)
	{
		cout<<it->first<<" "<<it->second.first<<" "<<it->second.second<<endl;
	}
}
