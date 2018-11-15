#include<bits/stdc++.h>
using namespace std;
int main()
{
	char gc[100];												cin>>gc;
	int A[26]={0},i;
	for(i=0;gc[i]!='\0';i++)		A[int(gc[i])-int('a')]=1;
	char ch[100005],ch1[1000005],ch2[100005];					cin>>ch;
	int n,m=0,l1,pos=-1;											cin>>n;
	for(l1=0;ch[l1]!='\0';l1++);
	for(i=0;ch[i]!='\0';i++)
		if(ch[i]!='*')		ch1[m++]=ch[i];
		else				pos=i;
	ch1[i]='\0';		
	while(n--)
	{
		cin>>ch2;
		int l2;		for(l2=0;ch2[l2]!='\0';l2++);
		int flag=1;
		int f=l2-l1;
		if(f<-1)		flag=0;
		else if(f==-1)
		{
			for(i=0;i<l2;i++)
				{
					if(ch1[i]!=ch2[i])
					{
						if(ch1[i]=='?')
						{
							char c=ch2[i];
							if(A[int(c)-int('a')]==1);
							else
							{	
								flag=0;
								break;
							}
						}
						else
						{
							flag=0;
							break;
						}
					}
				}
		}
		else
		{
			if(pos!=-1)
			{
				for(i=0;i<pos;i++)
				{
					//cout<<ch[i]<<" "<<ch2[i]<<endl;
					if(ch[i]!=ch2[i])
					{
						if(ch[i]=='?')
						{
							char c=ch2[i];
							if(A[int(c)-int('a')]==1);
							else
							{	
								flag=0;
								break;
							}
						}
					}
				}
				for(;i<pos+f;i++)
				{
					char c=ch2[i];
					//cout<<c<<endl;
					if(A[int(c)-int('a')]==0);
					else
					{	
						flag=0;
						break;
					}
				}
				for(int j=pos+1;i<l2;i++)
				{
					if(ch[i]!=ch2[j])
					{
						if(ch[i]=='?')
						{
							char c=ch2[j];
							if(A[int(c)-int('a')]==1);
							else
							{	
								flag=0;
								break;
							}
						}
					}
				}
			}
			else
			{
				for(i=0;i<l2;i++)
				{
					//cout<<ch[i]<<" "<<ch2[i]<<endl;
					if(ch[i]!=ch2[i])
					{
						if(ch[i]=='?')
						{
							char c=ch2[i];
							if(A[int(c)-int('a')]==1);
							else
							{	
								flag=0;
								break;
							}
						}
					}
				}
			}
		}
		if(flag)	cout<<"YES\n";
		else		cout<<"NO\n";
	}	
}
