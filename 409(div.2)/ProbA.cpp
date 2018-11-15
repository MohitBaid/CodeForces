#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j;	//scanf("%d",&n);
	char ch[1000];
	scanf("%s",ch);
	int flag=0;
	int ans=0;
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]=='V')
		{
			if(ch[i+1]=='K')
			{
				ans++;
				ch[i]='.';
				ch[i+1]='.';
			}
		}
	}
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]=='V')
			if(ch[i+1]=='V')
				if(flag==0)
				{
					flag=1;
					ans++;
				}
		if(ch[i]=='K')
			if(ch[i+1]=='K')
				if(flag==0)
				{
					flag=1;
					ans++;
				}					
	}
	cout<<ans<<endl;
	
}
