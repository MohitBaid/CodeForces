#include<stdio.h>
int main()
{
	int i,j,d,k,s=0;
	int n;	scanf("%d",&n);
	int c[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&c[i]);
		s=s+c[i];
	}
	d=n/2;
	s=s/d;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(c[i]+c[j]==s&&i!=j)
			{
				printf("%d %d\n",i+1,j+1);
				c[i]=-1;
				c[j]=-1;
			}	
		}
	}
	return 0;
}
