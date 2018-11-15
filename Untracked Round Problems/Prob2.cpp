#include<stdio.h>
int  main()
{
	int n,i,j,r,c,m=0;	scanf("%d",&n);
	long long int A[n][n],ans1,ans2;
	long long int rsum[n],csum[n];
	long long int dsum[2]={0,0};
	if(n==1)
	{
		long long int A;
		scanf("%I64d",&A);
		printf("%I64d",A);
		return 0;
	}	
	for(i=0;i<n;i++)
	{
		rsum[i]=0;
		csum[i]=0;
		for(j=0;j<n;j++)
			{
				scanf("%I64d",&A[i][j]);
				rsum[i]+=A[i][j];
				if(A[i][j]==0)
					{
						r=i;
						c=j;
					}				
			}
		if(i>0)
		{	
				if(rsum[i]!=rsum[i-1])
				{
					if(rsum[i]>rsum[i-1]&&r==i-1)
						ans1=rsum[i]-rsum[i-1];
					else if(rsum[i]<rsum[i-1]&&r==i)
						ans1=rsum[i-1]-rsum[i];	
				}
		}		
	}
	A[r][c]=ans1;
	for(i=0;i<n;i++)
	{
		rsum[i]=0;
		for(j=0;j<n;j++)
		{
			rsum[i]+=A[i][j];
			csum[i]+=A[j][i];
			if(i==j)	dsum[0]+=A[i][j];
			if(i+j==n-1)	
					dsum[1]+=A[i][j];
		}
	}					
	if(dsum[0]!=dsum[1])
		m=1;
	for(i=1;i<n;i++)
		{
			if(rsum[i]!=rsum[i-1])
				m=1;
			else if(csum[i]!=csum[i-1])
				m=1;	
		}
	if(m==0)
		printf("%I64d\n",ans1);
	else
		printf("-1\n");
	return 0;		
}
