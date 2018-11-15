#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,b,l,r,i;
	cin>>a>>b>>l>>r;
	//cout<<l<<" "<<r<<endl;
	int A[26]={0};
	char ch[100];
	for(i=0;i<a;i++)
		ch[i]=char(i+97);
	for(i=a;i<a+b;i++)
	{
		ch[i]=ch[a-1];
	}	
	for(i=b+a-1;i>=b;i--)
	{
		int f=(int)ch[i]-97;
		A[f]=1;
	}
	int j=0;
	for(i=b+a;i<2*a+b;i++)
	{
		if(A[j]==1)
		{
			while(A[j]==1)
				j++;		
		}
		ch[i]=char(j+97);
		j++;
	}
	for(i=2*a+b;i<2*a+2*b;i++)
	{
		ch[i]=ch[2*a+b-1];
	}
	ch[i]='\0';
	//cout<<ch;
	l--;
	r--;
	int ans=0;
	for(i=0;i<26;i++)	A[i]=0;
	if(r-l>=(2*a+2*b))
	{
		for(i=0;i<2*a+2*b;i++)
		{	
			int f=(int)ch[i]-97;
			A[f]=1;
		}
		
	}
	else
	{
		r=r%(2*a+2*b);
		l=l%(2*a+2*b);
		if(l<=r)
		{
			for(i=l;i<=r;i++)
			{
				int f=(int)ch[i]-97;
				A[f]=1;
			}
		}
		else
		{
			for(i=0;i<=r;i++)
			{
				int f=(int)ch[i]-97;
				A[f]=1;
			}	
			for(i=l;i<2*a+2*b;i++)
			{
				int f=(int)ch[i]-97;
				A[f]=1;
			}
		}
	}
	for(i=0;i<26;i++)
	{
		if(A[i]==1)
		{
			ans++;		
		}	
	}
	cout<<ans<<endl;
}
