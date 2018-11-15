#include<stdio.h>
#include<string.h>
int main()
{
	int q,i,j,n;	scanf("%d",&q);
	int A[q+1];
	char ch[11];
	A[0]=0;
	int max=0;
	for(i=1;i<=q;i++)
	{
		int d;
		gets(ch);
		if(ch[0]=='+')
		{
			d=0;
			for(i=2;ch[i]!='\0';i++)
				d=(ch[i]-48)+d*10;
			A[i]=d;
		}
		if(ch[0]=='-')
		{
			
			d=0;
			for(i=2;ch[i]!='\0';i++)
				d=(ch[i]-48)+d*10;
			for(i=0;i<n;i++)
			{
				if(A[i]==d)
					{
						A[i]=-1;
						break;
					}	
			}
		}
		if(ch[0]=='?')
		{	
			int f;
			int max=-1;
			d=0;
			for(i=2;ch[i]!='\0';i++)
				d=(ch[i]-48)+d*10;
			for(i=0;i<n;i++)
			{
				f=A[i]^d;
				if(f>max)
					max=f;
			}
			printf("%d\n",f);
		}
	}
	return 0;
}
