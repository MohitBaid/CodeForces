#include<stdio.h>
int main()
{
	int n,m,i,j,k,f;
	scanf("%d %d",&n,&m);
	char ch[n][m+1];
	int A[n][m];
	int B[n][2*m];
	for(i=0;i<n;i++)
		scanf("%s",ch[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(ch[i][j]=='.')
				A[i][j]=0;
			else
				A[i][j]=1;	
		}
	}
	for(i=1;i<=m;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<2*m;k++)
			{
				B[j][k]=0;
			}
		}
		for(k=0;k<n;k++)
		{
			for(f=0;f<i;f++)
			{
				B[k][f]=A[k][f];
			}	
			for(;f<m;f++)
			{
				B[k][f]=A[k][f]+A[k][f-i];
			}	
			for(;f<m+i;f++)
			{
				B[k][f]=A[k][f-i];
			}
		}
		for(k=0;k<n;k++)
		{
			for(f=0;f<m+i;f++)
			{
				printf("%d ",B[k][f]);
			}
			printf("\n");
		}
	}
}
