#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,x,i;	cin>>n>>x;
	long long int pick=3;
	long long int pick2=131072;
	set < int > ans;
	set < int > :: iterator it;
	bool flag=true;
	if(x==0)	
	{
		if(n==2)	cout<<"NO\n",flag=false;
		else
		{
			if(n%3==2)
			{
				ans.insert(0);
				ans.insert(2);
				ans.insert(3);
				ans.insert(4);
				ans.insert(5);
				n-=5;
			}
			else if(n%3==1)		
			{
				ans.insert(0);
				n--;
			}
		}	
	}
	else	
	{
		ans.insert(x);
		n--;
		//cout<<"inig :"<<x<<endl;
	}
	//cout<<n<<endl;
	if(flag)
	{
		//cout<<n<<endl;
		if(n%3==2)
		{
			bool flag2=false;
			int c=0;
			while(!flag2)
			{
				it=ans.begin();
				long long int temp=*it;
				if(ans.find(pick2)==ans.end()&&ans.find(pick2^temp)==ans.end())
				{
					ans.insert(pick2);
					ans.insert(pick2 ^ temp);
					ans.erase(temp);
					//cout<<"Inserting -- :"<<pick2<<" "<<(pick2^temp)<<" \nremoving : "<<temp<<endl;
					n--;
					c++;
					if(c==2)		flag2=true;
				}
				pick++;
				pick2++;
			}
		}
		if(n%3==1)
		{
			//cout<<"sdg";
			ans.insert(0);
			n--;
		}
		//cout<<n<<endl;
		while(1)
		{
			//cout<<n<<endl;
			if(n>=3)
			{
				if(ans.find(pick)==ans.end()&&ans.find(pick ^ pick2)==ans.end()&&ans.find(pick2)==ans.end())
				{
					ans.insert(pick);
					ans.insert(pick2);
					ans.insert(pick ^ pick2);
					n-=3;
				}
				pick+=2;
				pick2++;
				
			}
			if(n<=2)	break;
		}
		cout<<"YES\n";
		long long int an=0;
		for(it=ans.begin();it!=ans.end();it++)
		{
			cout<<*it<<" ";
			an=an^(*it);
		}
	}
}
