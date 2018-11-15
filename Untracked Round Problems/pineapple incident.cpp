#include<stdio.h>
int main()
{
	long long int s,x,t;
	scanf("%lld %lld %lld",&t,&s,&x);
	long long int m=x-t;
	long long int m1=x-t-1;
	//int flag=0;
	if(x<t)
			printf("NO");
	else if(x-t==1)
			printf("NO");
	else if((m%s)==0||(m1%s)==0)
			printf("YES");
	else 
		{
			printf("NO");
		}			
}
