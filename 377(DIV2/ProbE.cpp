#include<stdio.h>
int main()
{
	int n,m,i;	scanf("%d %d",&n,&m);
	int A[n];
	int B[m];
	int f;
	int ans=m;
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
		if(A[i]!=0)
			f=i;
	}
	for(i=0;i<m;i++)
	{
		scanf("%d",&B[i]);
		ans+=B[i];
	}
	if(ans>f)
		printf("-1");
	else
		printf("%d",ans);
	return 0;		
}
