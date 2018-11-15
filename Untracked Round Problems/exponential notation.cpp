#include<stdio.h>
int main()
{
	 double x;int e=0;
	scanf("%lf",&x);
	if(x>1&&x<10)
	{	
		if(x-(int)x==0)	
				printf("%d",&x);
			else
				printf("%f",&x);	
	}
	else if(x<1)	
		{
			while(x>1&&x<10)
			{
				x=x*10;
				e++;
			}	
			if(x-(int)x==0)	
				printf("%dE%d",&x,&e);
			else
				printf("%fE%d",&x,&e);	
		}
		else if(x>10)	
		{
			while(x>1&&x<10)
			{
				x=x/10;
				e--;
			}	
			if(x-(int)x==0)	
				printf("%dE%d",&x,&e);
			else
				printf("%fE%d",&x,&e);	
		}		
}
