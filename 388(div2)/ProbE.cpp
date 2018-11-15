#include<stdio.h>
int main()
{
	int n,i,c=0;	scanf("%d",&n);
	int A[n];	
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=1;i<n;i++)
	{
		if(A[i]>A[i-1])
			c++;
	}
	printf("%lf",c/(n-c));
}
