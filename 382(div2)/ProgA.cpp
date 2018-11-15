#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,n,a,b,c=0,m,flag=0;;
	scanf("%d %d",&n,&k);
	char ch[n];
	scanf("%s",ch);
	for(i=0;ch[i]!='\0';i++)
		{
			if(ch[i]=='G')
			{
				for(j=i;ch[j]!='\0';j=j+k)
				{
					if(ch[j]=='T')
					{
						c=1;
						break;
					}
					else if(ch[j]=='#')
					{
						break;
					}				
				}
				flag=1;				
			}
			if(flag)
				break;
			else if(ch[i]=='T')
			{
				for(j=i;ch[j]!='\0';j=j+k)
				{
					if(ch[j]=='G')
					{
						c=1;
						break;
					}
					else if(ch[j]=='#')
					{
						break;
					}				
				}
			}
		}
		if(c==0)
			printf("NO\n");
		else
			printf("YES\n");	
	return 0;	
		
}
