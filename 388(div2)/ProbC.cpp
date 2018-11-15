#include<stdio.h>
int main()
{
	int n,i;	scanf("%d",&n);
	char ch[n+1];
	int Ar[n];
	int Ad[n];
	int A[n];
	scanf("%s",ch);
	int j;int d=0,r=0;
	for(i=0;i<n;i++)
	{
		A[i]=1;
		Ar[i]=0;
		Ad[i]=0;
	}
	int pr=0,pd=0;
	for(i=0;i<n;i++)
	{
		if(ch[i]=='D')
		{
			d++;
			Ad[pd++]=i;
		}	
		else
		{
			r++;
			Ar[pr++]=i;
		}		
			
	}
	int l=n;
	int m=0;n=0;
	while(d!=0&&r!=0)
	{			
		for(i=0;ch[i]!='\0';i++)	
		{	
			if(A[i]==1)
			{
				if(ch[i]=='D')
				{
					if(m<pr)
					{
						A[Ar[m++]]=0;
						r--;
					}			
				}
				if(ch[i]=='R')
				{
					if(n<pd)
					{
						A[Ad[n++]]=0;
						d--;		
					}
				}	
			}
		}	
	}
	if(d)	printf("D");
	else	printf("R");	
}		
