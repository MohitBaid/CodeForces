#include<stdio.h>


int main()
{
	int n;	scanf("%d",&n);
	int i,max=0,ans=0;
	int A[n];
	for(i=0;i<n;i++)
	{	
		scanf("%d",&A[i]);
		if(A[i]>max)
			max=A[i];
	}
//	printf("%d",max);
	for(i=0;i<n;i++)
		ans=ans+(max-A[i]);
	printf("%d",ans);	
}
