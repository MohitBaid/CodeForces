#include<stdio.h>
int main()
{
		int n,sum=0;	scanf("%d",&n);
		long long int A[n];
		for(int i=0;i<n;i++)
			{
				scanf("%I64d",&A[i]);
				sum+=A[i]-1;
				if(sum%2==0)
					printf("2\n");
				else
					printf("1\n");		
			}
			return 0;
}
