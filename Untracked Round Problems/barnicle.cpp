#include<stdio.h>
int main()
{
	float f;int b,a,d;
	scanf("%d.%de%d",&a,&d,&b);
	f=d;
	while(f>1.0)
	{
		f=f/10;
	}
	for(int i=1;i<=b;i++)
		{
			f=f*10;
		}	
	printf("%d%f",a,f);		
}
