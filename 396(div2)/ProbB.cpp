#include<stdio.h>
#include<stdlib.h>
int cmpfunc(const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main()
{
	int n,i,j;	scanf("%d",&n);
	int A[n];
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	qsort(A,n,sizeof(int),cmpfunc);
	int flag=0;
	for(i=1;i<n-1;i++)
	{
		int r=A[i]+A[i-1]-1;
		int l=A[i]-A[i-1]+1;
		if(A[i+1]>=l && A[i+1]<=r)	
		{
				flag=1;
					break;
		}			
	}
	if(flag)
		printf("YES");
	else
		printf("NO");		
}
