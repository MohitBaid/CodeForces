#include<stdio.h>
int main()
{
	int n;	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(i!=1)	printf(" that ");
		if(i%2==0)
			printf("I love");
		else if(i%2!=0)
			printf("I hate");		
	}
	printf(" it");
}
