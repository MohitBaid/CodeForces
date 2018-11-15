#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
		int  n,k,i;	scanf("%d %d",&n,&k);
		int A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		int ans=0;
		sort(A,A+n);
		int m=0;
		for(i=0;i<n;)
		{
			if(A[i]<=0)
				i++;
			else
			{	
				if(A[i]<=k && i+1<n)
				{
					A[i]=0;
					A[i+1]-=k;
				}
				else
				{	
					if(A[i]>=2*k)
							A[i]=A[i]-2*k;
					else
							A[i]=0;			
				}
				if(A[i]<=0)
					i++;
				ans++;
			}		
		}
		cout<<ans;
}
