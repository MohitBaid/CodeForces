#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i,j;	scanf("%d %d",&n,&m);
	int A[n][m];
	int B[1000]={0};
	int C[1000]={0};
	for(i=0;i<n;i++)
	{	
		int min=5000;
		for(j=0;j<m;j++)
		{
			scanf("%d",&A[i][j]);
				if(A[i][j]<min)
				{
					min=A[i][j];
				}
		}
		B[i]=min;
	}
	/*for(i=0;i<n;i++)
		printf("%d ",B[i]);
	printf("\n");	*/
	int ar[1000]={0},ac[1000]={0};	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			A[i][j]-=B[i];
		}
	}
	/*for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			printf("%d ",A[i][j]);
		printf("\n");
	}*/
	for(i=0;i<m;i++)
	{
		int min=5000;
		for(j=0;j<n;j++)
		{
			if(A[j][i]<min)
				min=A[j][i];
		}
		C[i]=min;
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			A[j][i]-=C[i];
		}
	}
	int c=0;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			if(A[i][j]==0)
				c++;	
	if(c==n*m)
	{
		int k=0;
		for(i=0;i<n;i++)
		{
			if(B[i]>0)
				k+=B[i];
		}
		for(i=0;i<m;i++)
		{
			if(C[i]>0)
				k+=C[i];
		}
		printf("%d\n",k);
		for(i=0;i<n;i++)
		{
			if(B[i]>0)
				for(j=0;j<B[i];j++)
					printf("row %d\n",i+1);
		}
		for(i=0;i<m;i++)
		{
			if(C[i]>0)
				for(j=0;j<C[i];j++)
					printf("col %d\n",i+1);
		}
	}
	else
		printf("-1\n");	
}
