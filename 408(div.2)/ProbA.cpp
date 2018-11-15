#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,m,j,k;	scanf("%d %d %d",&n,&m,&k);
	int A[n];
	int d[n];
	for(i=0;i<n;i++)
	{
			scanf("%d",&A[i]);
	}
	m--;
	for(i=0;i<n;i++)
	{
		if(A[i]==0)
			d[i]=1000000000;
		else
		{
			if(A[i]<=k)
				d[i]=fabs(i-m)*10;
			else
				d[i]=1000000000;	
		}	
	}
	sort(d,d+n);
	printf("%d\n",d[0]);		
	
}
