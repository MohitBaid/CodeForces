#include<stdio.h>
int main()
{
	int n,l,r,i;	scanf("%d %d %d",&n,&l,&r);
	int A[n],B[n],C[n];
	int min=1000000,max=-1;
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
		B[i]=A[i];
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&C[i]);
		B[i]+=C[i];
		if(C[i]==1)
			min=B[i];
		if(C[i]==n)
			max=B[i];	
	}		
	if(max-min>r-l)
			printf("-1");
	else
	{
		if(min<l)
		{
			int f=l-min;
			for(i=0;i<n;i++)
				B[i]+=f;
		}
		else if(max>r)
		{
			int f=max-r;
			for(i=0;i<n;i++)
				B[i]-=f;
		}	
		for(i=0;i<n;i++)
			printf("%d ",B[i]);
	}			
}
