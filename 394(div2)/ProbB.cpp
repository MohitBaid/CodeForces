#include<stdio.h>
int main()
{
	int n,L,i,k=0,flag=1;	scanf("%d %d",&n,&L);
	int A[n],B[n];
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	for(i=0;i<n;i++)
		scanf("%d",&B[i]);
	while(1)
	{
		k++;
		flag=1;
		for(i=0;i<n;i++)
			A[i]++;
		if(A[n-1]==L)
		{
			A[n-1]=0;
			for(i=n-1;i>0;i--)	
				A[i]=A[i-1];
			A[0]=0;	
		}
		/*for(i=0;i<n;i++)
			printf("%d ",A[i]);*/
		//printf("\n");	
		for(i=0;i<n;i++)
			if(A[i]!=B[i])
				flag=0;
		if(flag)
		{
			printf("YES\n");
			break;
		}	
		if(k==L)
		{
			flag=0;
			break;			
		}	
	}
	if(!flag)
		printf("NO\n");
	
}
