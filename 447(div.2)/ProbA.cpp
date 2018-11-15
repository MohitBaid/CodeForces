#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int ans=0,i,j,k;
	for(i=0;i<s.size();i++)
	{
		if(s[i]=='Q')
		{
			for(j=i+1;j<s.size();j++)
			{
				if(s[j]=='A')
				{
					for(k=j+1;k<s.size();k++)
					{
						if(s[k]=='Q')
							ans++;
					}
				}
			}
		}
	}
	cout<<ans<<endl;
}
