#include<stdio.h>
int main()
{
	int n,i;	scanf("%d",&n);
	int d=n/2;
	int e=n%2;
	printf("%d\n",(d-e)+e);
	for(i=0;i<d-e;i++)
	{
		printf("2 ");
	}
	for(i=0;i<e;i++)
	{
		printf("3 ");
	}
}
