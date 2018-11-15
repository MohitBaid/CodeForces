#include<stdio.h>
int main()
{
	int a,b,c,i;		scanf("%d %d %d",&a,&b,&c);
	for(i=a;i>=0;i--)
	{
		if(b>=2*i&&c>=4*i)
		{
			printf("%d",i+2*i+4*i);
			break;
		}	
	}
				
}
