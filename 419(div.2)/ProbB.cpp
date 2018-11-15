#include<bits/stdc++.h>
using namespace std;
int main()
{
	int A[200001]={0};
	int n,k,q,i;	scanf("%d %d %d",&n,&k,&q);
	while(n--)
	{
		int l,r;	scanf("%d %d",&l,&r);
		A[l]+=1;
		A[r+1]-=1;
	}
	for(i=1;i<=200000;i++)
		A[i]+=A[i-1];
	for(i=0;i<=200000;i++)
	{
		if(A[i]>=k)
			A[i]=1;
		else
			A[i]=0;	
	}	
	for(i=1;i<=200000;i++)
		A[i]+=A[i-1];
	int ans=0;	
	while(q--)
	{
		int l,r;	scanf("%d %d",&l,&r);
		if(l!=1)
			ans=A[r]-A[l-1];
		else
			ans=A[r];		
		printf("%d\n",ans);
	}

}
