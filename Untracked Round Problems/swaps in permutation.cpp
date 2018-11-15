#include<stdio.h>
int main()
{
	int n,m,t;
	scanf("%d%d",&n,&m);
	int A[n];
	for(int i=0;i<n;i++)
			scanf("%d",&A[i]);
	while(m--)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		//printf("SWapping...%d and %d ",A[a],A[b]);
		t=A[a];
		A[a]=A[b];
		A[b]=t;
	}		
	for(int i=0;i<n;i++)
		printf("%d ",A[i]);
}
