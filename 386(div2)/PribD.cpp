#include<stdio.h>
int main()
{
	int n,k,a,b,i;		scanf("%d %d %d %d",&n,&k,&a,&b);
	char ch[n+5];	int l,cr=0,cb=0,flag=0;
	for(i=0;i<n;i++)
	{
		if(i==0)
			{
				if(b>a)
					l=0;
				else
					l=1;	
			}
		if(b>a)
		{
			ch[i]='B';
			b--;
			//printf("In 1 adding B \n" );
			if(l==0)
				cr++;
			else
			{
				l=0;
				cr=1;
			}		
		}	
		else if(a>b)
		{
			ch[i]='G';
			a--;
			//printf("In 2 adding G \n" );
			if(l==1)
				cb++;
			else
			{
				l=1;
				cb=1;
			}	
		}
		if(a==b)
		{
			flag=1;
			break;
		}
		else if(cr==k)
		{
			//printf("In 4 adding G \n" );
			ch[++i]='G';
			l=1;
			a--;
			cb=1;	
		}
		else if(cb==k)
		{
			//printf("In 5 adding B \n" );
			ch[++i]='B';
			l=0;
			b--;
			cr=1;
		}	
		if(a<0||b<0)
		{
			break;
		}	
	}
	if(flag)
	{
		if(l==0)
		{
			//printf("HHHHHHHHHHHHHH");
			while(1)
			{
				if(i==n)
					break;
				ch[++i]='G';
				if(i==n)
					break;
				ch[++i]='B';
			}
		}
		else
		{
			//printf("zdgvgbfdg");
			while(1)
			{
				if(i==n)
					break;
				ch[++i]='B';
				if(i==n)
					break;
				ch[++i]='G';
			}
		}
		ch[i]='\0';
	}
	if(flag)
		printf("%s",ch);
	else
		printf("NO");				
}
