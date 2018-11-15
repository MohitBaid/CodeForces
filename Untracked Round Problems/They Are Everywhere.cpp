#include<stdio.h>
int main()
{
	int n,q,i,j,f,max=0,m=0;
	scanf("%d",&n);
	char s[n];
	char ch;
	scanf("%s",s);
	int alpha[58]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	for(i=0;s[i]!='\0';i++)
	{	
		ch=s[i];
		f=(int)ch;
		if(alpha[f-65]==0)
			{
				m++;
				alpha[f-65]++;
			}		
	}
	max=n;
	q=m;
	for(i=0;s[i]!='\0';i++)
	{
		m=0;
		int d=0;
		int alpha[58]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
		for(j=i;s[j]!='\0';j++)
		{
			ch=s[j];
			d++;
			f=(int)ch;
			if(alpha[f-65]==0)
				{
					m++;
					alpha[f-65]++;
				}
			if(m==q)
			{
				if(d<max)
					max=d;
				break;	
			}
		
	}	}		
	printf("%d",max);
	return 0;		
}
