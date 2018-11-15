#include<stdio.h>
#include<string.h>
struct pass
{
	int len;
	char ch[101];
};
int main()
{
	int n,k,i,j,resb,resw;	scanf("%d %d",&n,&k);
	struct pass c[n],p,temp;
	for(i=0;i<n;i++)
	{	
		scanf("%s",&c[i].ch);
		c[i].len=strlen(c[i].ch);
	}
	scanf("%s",p.ch);
	p.len=strlen(p.ch);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(c[i].len<c[j].len)
			{
				temp=c[i];
				c[i]=c[j];
				c[j]=temp;	
			}
		}
	}
	for(i=0;c[i].len!=p.len;i++);
	resb=i+(i/k)*5+1;
	for(;c[i].len==p.len;i++);
	resw=i+((i-1)/k)*5;
	printf("%d %d",resb,resw);
}
