#include<stdio.h>
#include<stdlib.h>
struct sub
{
	int n;
	int f;
	int p;
};
int cmpfunc (const void * a, const void * b)
{
   		int y1 = ((const struct sub*)a)->f;
        int y2 = ((const struct sub*)b)->f;
        if (y1 < y2)
            return -1;
        else if (y1 > y2)
            return 1;
}
int main()
{
	int n,m,i;	scanf("%d %d",&n,&m);
	int A[n];
	int B[m];
	struct sub fre[m+1];
	int f;
	int ans=m;
	for(i=0;i<=m;i++)
	{
		fre[i].n=i;
		fre[i].f=0;
	}	
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
		if(A[i]!=0)
			f=i;
		fre[A[i]].f++;	
	}
	for(i=0;i<m;i++)
	{
		scanf("%d",&fre[i].p);
		ans+=B[i];
	}
	qsort(fre,m+1,sizeof(struct sub),cmpfunc);
	for(i=1;i<m;i++)
	{
		if(fre[i].f==0)
		{
			ans=n+1;
			break;
		}	
	}
	if(ans>f)
		printf("-1");
	else
		printf("%d",ans);
	return 0;		
}
