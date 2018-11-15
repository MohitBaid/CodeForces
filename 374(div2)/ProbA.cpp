#include<stdio.h>
int main()
{
	int n,i;	scanf("%d",&n);
	char ch[n];
	int ans[n];
	int flag=0;
	int m=0,c=0;
	scanf("%s",ch);
	for(i=0;i<=n;i++)
	{
		if(ch[i]=='B')
		{
			c++;
			flag=1;	
		}
		else if(flag==1)
		{
			flag=0;
			ans[m++]=c;
			c=0;
		}
	}
	printf("%d\n",m);
	for(i=0;i<m;i++)
		printf("%d ",ans[i]);
}
