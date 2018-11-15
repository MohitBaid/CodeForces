#include<stdio.h>
int main()
{
	int n,i,p1=0,p2=0;char ch;	scanf("%d",&n);
	long long int push[n],temp;
	for(i=0;i<n;i++)
	{
		push[i]=0;
		pop[i]=0;
	}
	for(i=0;i<n;i++)
	{
		scanf("%c",&ch);
		if(ch=='+')
			{
				scanf("%lld",&temp);
				push[p1++]=temp;
			}
		else if(ch=='-')
			{
				scanf("%lld",&temp);
				for(j=0;j<p1;j++)
					{
						if(push[p1]==temp)
							
					}
			}	
		else if(ch=="?");
			{
				scanf("%lld",&temp);
			}	
	}
}
