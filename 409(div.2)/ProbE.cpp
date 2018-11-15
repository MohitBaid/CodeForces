#include<stdio.h>
int main()
{
	int n,m,i,k=0;	scanf("%d %d",&n,&m);
	int A[m];
	for(i=0;i<m;i++)	A[i]=0;	
	while(n--)
	{
		int t;
		scanf("%d",&t);
		A[t]=1;
	}
	for(i=2;i<m;i++)
	{
		if(m%i==0)
			A[i]=1;
	}
	for(i=0;i<m;i++)
		if(A[i]==0)
			k++;
	printf("%d\n",k);
	for(i=1;i<m;i++)
		if(!A[i])
			printf("%d ",i);
	printf("0 ");		
}
