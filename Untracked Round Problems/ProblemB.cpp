#include<stdio.h>
#include<stdlib.h>
int main()
{
	long int n,i;	scanf("%ld",&n);
	long int A[n];
	int B[100001];
	for(i=0;i<=100000;i++)
		B[i]=0;
	for(i=0;i<n;i++)
	{
			scanf("%ld",&A[i]);
			B[A[i]]++;
	}	
	int q;	scanf("%d",&q);
	while(q--)
	{
		int m;scanf("%d",&m);
		int res=0;
		for(i=1;i<=m;i++)
			res=res+B[i];
		printf("%d\n",res);
	}
	return 0;		
}
