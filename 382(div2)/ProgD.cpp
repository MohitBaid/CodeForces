#include<stdio.h>
int checkprime(long long int n)
{
	int i;
	if(n==0||n==1)
		return 0;
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
			return 0;	 
	}
	return 1;
}
int main()
{
	long long int n;
	scanf("%lld",&n);
	if(n==2||n==3)
		printf("1\n");
	else if(n==4)
		printf("2\n");
	else if(checkprime(n))	
		printf("1\n");
	else
	{
		if(n%2==0)
			printf("2\n");
		else
		{
			if(checkprime(n-2))
				printf("2\n");
			else	
				printf("3\n");
		}			
	}
	return 0;		
}
