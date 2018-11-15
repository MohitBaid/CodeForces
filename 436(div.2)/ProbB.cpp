#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s,i,j,k;	cin>>s;
	char ch[10000];	cin>>ch;
	int ans=0;
	set < char > c;
	for(i=0;i<s;i++)
	{
		if(ch[i]>='a' && ch[i]<='z')			c.insert(ch[i]);
		if(ch[i]>='A' && ch[i]<='Z')
		{
			//cout<<c.size()<<" "<<ans<<endl;
			if(ans < c.size())		ans=c.size();
			c.clear();	
		}
	}
	if(ans < c.size())				ans=c.size();
	c.clear();
	cout<<ans<<endl;
}
