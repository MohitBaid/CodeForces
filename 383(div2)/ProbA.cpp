#include<stdio.h>
int main()
{
	int i,j,n,t,a,b,c,d,m,p,q,r;
	scanf("%d",&n);
	if(n==0)
		printf("1");
	else
	{	
		m=8,p=8;	
		int A[]={6,8,4,2};	
		n=n%4;
		printf("%d",A[n]);
	}	
}
