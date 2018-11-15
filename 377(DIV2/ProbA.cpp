#include<stdio.h>
int main()
{
	int n,r,i,m;	scanf("%d %d",&n,&r);
	m=n;
	for(i=1;;i++)
	{
			if(n%10==r)
			{
				printf("%d\n",i);
				break;
			}
			if(n%10==0)
			{
				printf("%d\n",i);
				break;
			}		
			n=n+m;
	}
	return 0;
}
