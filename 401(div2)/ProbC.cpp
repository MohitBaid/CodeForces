#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
		int n,k,i,ans=0;	scanf("%d %d",&n,&k);
		int A[n],B[n],C[n];
		for(i=0;i<n;i++)
				scanf("%d",&A[i]);
		for(i=0;i<n;i++)
		{
				scanf("%d",&B[i]);
				ans+=B[i];
		}	
		for(i=0;i<n;i++)
				C[i]=A[i]-B[i];
		sort(C,C+n);
		for(i=0;i<k;i++)
				ans+=C[i];
		while(C[i]<0 & i<n)
		{
			ans+=C[i];
			i++;
		}
		printf("%d\n",ans);
}
