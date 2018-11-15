#include<stdio.h>
int main()
{
	int n,m,i,j,g,h,t=0,flag=0;
	scanf("%d %d",&n,&m);
	//printf("%d %d",n,m);
	int r[n];
	int c[m];
	for(i=0;i<n;i++)	r[i]=0;
	for(i=0;i<m;i++)	c[i]=0;
	char f[n][m];
	for(i=0;i<n;i++)
		scanf("%s",f[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
				if(f[i][j]=='*')
				{
					r[i]++;
					c[j]++;
					t++;
				}
		}
	}		
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			{
				if(f[i][j]=='*'&&r[i]+c[j]==t+1)
					{
						printf("YES\n%d %d",i+1,j+1);
						return 0;
					}	
				else if(f[i][j]=='.'&&r[i]+c[j]==t)
					{
						printf("YES\n%d %d",i+1,j+1);
						return 0;
					}	
			}	
	}
	printf("NO");
	return 0;	
}
