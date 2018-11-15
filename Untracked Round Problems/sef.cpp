#include<stdio.h>
int main()
{
	int n,f,l,v1,v2,k,i,d=0;float t;
	scanf("%d %d %d %d %d",&n,&l,&v1,&v2,&k);
	for(i=0;n>0;i++)
	{
		f=l-d;
		t+=f/v2;
		if(n<k)
		{
			printf("%f",t);
			return 0;
		}
		printf("%f\n",t);
		n=n-k;
		if(n<0)
		{
			printf("%f",t);
			return 0;
		}
		d=d+v1;
		t=t+(l-d)/v2;
	}
	printf("%f",t);
	return 0;
}
