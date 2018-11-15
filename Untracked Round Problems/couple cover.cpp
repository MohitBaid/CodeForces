#include<stdio.h>
int main()
{
		int n,m,i,t=0,f;
	scanf("%d",&n);
	int A[n];
	int C[n*n];
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	scanf("%d",&m);	
	int B[m];
	for(i=0;i<m;i++)
		scanf("%d",&B[i]);
	for(i=0;i<n*n;i++)
		c[i]=A[i%5];		
	for(i=0;i<m;i++)
	{
			t=0;
			for(int j=0;j<n*n;j++)
			{
				if(C[j]*C[0]>=B[i])
							t++;
				}
			}	
			printf("%d\n",t);
	}
}			
