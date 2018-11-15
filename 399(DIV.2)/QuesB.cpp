#include<stdio.h>
int main()
{
		long long int n,l,r,p;	scanf("%lld %lld %lld",&n,&l,&r);
		int i,c=0,m=0;
		long long int pow=1;
		while(1)
		{
				pow=pow*2;
				if(pow>n)
					break;
				c++;	
		}
		pow=pow/2;
		printf("%d--- %lld\n",c,pow);
		p=n;
		int A[c+1];
		for(i=0;i<c;i++)
			A[i]=0;
		m=c;	
		while(n>0)
		{
			A[m--]=n%2;
			n=n/2;
			//m++;	
		}	
		for(i=1;i<=c;i++)
		{		
			printf("%d  -- --  ",A[i]);
		}
}
