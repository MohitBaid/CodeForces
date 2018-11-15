#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;	cin>>n;
	set < int > s;
	set < int > :: iterator it;
	map < int,int > mp;
	for(i=0;i<n;i++)
	{
		int temp;	cin>>temp;
		s.insert(temp);
		mp[temp]++;
	}
	if(s.size()==2)
	{
		it=s.begin();
		if(mp[*it]==n/2)
		{
			cout<<"YES\n";
			cout<<*it<<" "<<*(it++);
			return 0;
		}
	}
	cout<<"NO\n";
}
