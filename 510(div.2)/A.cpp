#include<bits/stdc++.h>
#define unordered_map map
#define int long long int
using namespace std;
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,f,d,i;	cin>>n>>f>>d;
	int s[n];
	set < int > A;  set < int > :: iterator st;
	unordered_map < int,int > mp;
	
	for(i=0;i<n;i++)
	{
		int t;	cin>>t;
		A.insert(t);
		s[i]=t;
		mp[t] = -1;
	}	
	
	int c = 1;
	while(!A.empty())
	{
		int num = *(A.begin());
		mp[num]=c;
		A.erase(num);
		
		while(!A.empty())	
		{
			st = lower_bound(A.begin(),A.end(),num+d+1);
			
			if(st==A.end())	break;
			int r = *st;
			if(r-num <=d)
			{
				break;
			}
			
			mp[r]=c;
			num = r;
			A.erase(r);
		}
		c++;
	}
	
	cout<<c-1<<endl;
	for(i=0;i<n;i++)
	{
		cout<<mp[s[i]]<<" ";
	}	
	cout<<endl;
}
