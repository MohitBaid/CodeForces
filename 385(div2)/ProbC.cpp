#include<stdio.h>
int main()
{
	int n,m,k,i;
	scanf("%d %d %d",&n,&m,&k);
	int e=(n*(n-1))/2;	
	for(i=0;i<(k-1);i++)
		e=e-(n-i-1);
	printf("%d",e-m);
}
