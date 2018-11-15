#include<stdio.h>
int main()
{
	int n,x,i,ans=0;
	long long int temp;
	scanf("%d %d",&n,&x);
	int A[n],F[1000000];
	for(i=0;i<1000000;i++)
			F[i]=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
		F[A[i]]++;
	}
	if(x==0)
	{
		for(i=0;i<n;i++)
			ans+=F[A[i]]-1;
	}
	else
	{
		for(i=0;i<n;i++)
		{
			temp=A[i]^x;
			ans+=F[temp];
			F[A[i]]--;
		}
	}	
	printf("%d",ans);
}
