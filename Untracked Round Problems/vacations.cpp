#include<stdio.h>
int main()
{
	int n,i,res=0;	scanf("%d",&n);
	int a[n];
	int h[n];
	for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			//h[i]=0;
		}		
		//printf("TTTTTTTTTTTTTT\n");	
	/*	if(a[0]==0)
		{
			res++;
			h[0]=1;
		}
	for(i=1;i<n;i++)
	{
		
		if(a[i]==0)
		{
			res++;
			h[i]=1;
		}	
		else if(a[i]==3)
		{
			if(a[i-1]==1&&a[i+1]==2&&h[i-1]==0)
					{
						res++;
						h[i]=1;
					}					
			else if(a[i-1]==2&&a[i+1]==1&&h[i-1]==0)
				{
						res++;
						h[i]=1;
				}		
				
		}
		else if(a[i]==1)
		{
			if(a[i-1]==1&&h[i-1]==0)
			{
					res++;	
					h[i]=1;
			}
			else if(a[i-1]==3&&a[i-2]==2&&h[i-2]==0&&i!=2)
			{
				res++;	
					h[i]=1;
			}
			
		}
		else if(a[i]==2)
		{
			if(a[i-1]==2&&h[i-1]==0)
			{
					res++;	
					h[i]=1;
			}
			else if(a[i-1]==3&&a[i-2]==1&&h[i-2]==0&&i!=2)
			{
					res++;	
					h[i]=1;
			}
		}*/
		if(a[0]!=0)
				res=1;
		if(a[0]==3)
		{
			if(a[1]==2)
				a[0]=1;
			else
				a[0]=2;				
		}		
		for(i=1;i<n;i++)
		{
			if(a[i]==1)
			{
					if(a[i-1]!=1)
							res++;
			}
			if(a[i]==2)
			{
					if(a[i-1]!=2)
							res++;
			}
			if(a[i]==3&&i!=n-1)
			{
					/*if(a[i-1]==1&&a[i+1]!=1&&i>=1)
							{
								res++;
								
							}	
								
					else if(a[i-1]==2&&a[i+1]!=2&&i>=1)
							{
								res++;
								
							}	*/		
					if((a[i-1]==1&&a[i+1]==1)||(a[i-1]==1&&a[i+1]==3))
						{
							res++;
							a[i]=2;
						}	
					else if((a[i-1]==2&&a[i+1]==2)||(a[i-1]==2&&a[i+1]==3))
						{	
							res++;
							a[i]=1;
						}	
					else if(a[i-1]==0)
							res++;
			}				
			if(a[i]==3&&i==n-1)
				{	
					res++;
					//printf("UUUUUUUUUUUUU");
				}													
		}	
	printf("%d",n-res);
}	
