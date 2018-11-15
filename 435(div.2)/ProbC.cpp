#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,x,i;	cin>>n>>x;
	set < int > ans;
	set < int > :: iterator it;
	long long int pow=1;
	while(pow<=x)
		pow=pow*2;
	pow=pow/2;
	if(n==1)
	{
		cout<<"YES\n";
		cout<<x;
		return 0;
	}
	while(x)
	{
		if(x>=pow)
		{
			x=x-pow;
			ans.insert(pow);
		}
		pow=pow/2;
	}
	bool flag=false;
	long long int pick=3;
	long long int pick2=131072;
	long long int m=n-ans.size();
	if(ans.size()==0)
	{
		if(m%3==2)	
		{
			if(m==2)	cout<<"NO\n",flag=true;
			else
			{
				ans.insert(0);
				ans.insert(2);
				ans.insert(3);
				ans.insert(4);
				ans.insert(5);
				m-=5;
				pick=7;
			}
		}
		if(m%3==1)	ans.insert(0);
	}
	if(!flag)
	{
		if(ans.size()>n)	cout<<"NO\n";
		else
		{
			if(m%3==2)
			{
				it=ans.begin();
				long long int temp=*it;
				bool flag2=false;
				while(!flag2)
				{
					if(ans.find(pick)==ans.end()&&ans.find(pick^temp)==ans.end())
					{
						ans.insert(pick2);
						ans.insert(pick2 ^ temp);
						ans.erase(temp);
						m=m-1;
						flag2=true;
					}
				}
			}
			if(m%3==1)	
			{
				ans.insert(0);
				m--;
			}
			while(1)
			{
				if(m>=3)
				{
					if(ans.find(pick)==ans.end()&&ans.find(pick ^ pick2)==ans.end()&&ans.find(pick2)==ans.end())
					{
						ans.insert(pick);
						ans.insert(pick2);
						ans.insert(pick ^ pick2);
						m=m-3;
					}
					pick+=2;
					pick2++;
				}
				if(m<=2)	break;
			}
			cout<<"YES\n";
			long long int an=0;
			for(it=ans.begin();it!=ans.end();it++)
			{
				cout<<*it<<" ";
				an=an^(*it);
			}
			//cout<<"asff  "<<ans.size()<<" "<<an<<endl;
		}
	}
	cout<<endl;
}
