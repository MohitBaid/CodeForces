#include<stdio.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main()
{
	int i,j,k,n,a,b,c,n1,n2;
	scanf("%d %d %d",&n,&n1,&n2);
	//scanf("%d",&n,&a,&b,&c);
	int A[n];
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	qsort(A,n,sizeof(int),cmpfunc);
	if(n1<n2)
	{
		a=n1;
		n1=n2;
		n2=a;
	}
	float s1=0,s2=0;
	for(i=0;i<n2;i++)
	{
		s1+=A[n-i-1];
	}
	s1=s1/n2*(1.000);
	for(;i<n1+n2;i++)
	{
		s2+=A[n-i-1];
	}
	s2=s2/n1*(1.000);
	printf("%f",s1+s2);		
	return 0;
}
