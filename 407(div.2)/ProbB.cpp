#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
		long long int b,q,l,m,i;		scanf("%lld %lld %lld %lld",&b,&q,&l,&m);
		long long int A[m];
		if(b<0)
			b=b*-1;
		if(q<0)
			q=q*-1;		
		if(l<0)
			l=l*-1;		
		for(i=0;i<m;i++)
			cin>>A[i];
		sort(A,A+m);
		long long int ans=0;
		if(b==0||q==1)
		{
				long long int flag=0;
				for(i=0;i<m;i++)
					if(A[i]==b)
						flag=1;
				if(!flag)
					printf("inf");
				else
					printf("0");			
		}
		if(q==-1)
		{
				long long int flag1=0,flag2=0;
				for(i=0;i<m;i++)
				{
					if(A[i]==b)
						flag1=1;
					if(A[i]==b*-1)
						flag2=1;
				}
				if(!flag2)
					printf("inf");
				else if(flag2==1&&flag1==1)
					printf("0");	
		}
		else if(q==0)
		{
				if(abs(b)>l)
				{
					printf("0");	
					return 0;
				}
				long long int flag1=0,flag2=0;
				for(i=0;i<m;i++)
				{
					if(A[i]==b)
						flag1=1;
					if(A[i]==0)
						flag2=1;
				}
				if(!flag2)
					printf("inf");
				else if(flag2==1&&flag1==1)
					printf("0");	
				else if(flag2==1&& flag1==0)
					printf("1");
		}
		else
		{
			long long int temp=l,temp2=b;
			for(i=0;;i++)
			{
				if(temp2>temp)
					break;
				else
				{
					ans++;
					temp2=temp2*q;	
				}	
			}
			for(i=1;i<m;i++)
			{
				if(A[i-1]<=l)
				{
					if(A[i-1]%b==0&&A[i-1]!=A[i])
					{
						ans--;		
					}
				}
			}
			if(A[i-1]<=l)
			{
				if(A[i-1]%b==0&&A[i-1]!=A[i-2])
				{
					ans--;		
				}
			}
			printf("%lld\n",ans);
		}
}
