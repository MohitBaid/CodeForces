#include<stdio.h>
int main()
{
	int n,k,i;	scanf("%d %d",&n,&k);
	int A[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	int d=0;
	for(i=1;i<n;i++)
	{
		int m=A[i]+A[i-1];
		if(m<k)
		{
			A[i]+=k-m;
			d+=k-m;
		}	
	}
	printf("%d\n",d);
	for(i=0;i<n;i++)
		printf("%d ",A[i]);
	return 0;	
}
