#include<stdio.h>
//# define SIZE 100000
int main()
{
	long long int n,m,x,y,s=0,i,j;
	scanf("%lld %lld",&n,&m);
	s=n*n;
	int c[n];
	for(i=0;i<n;i++)
	{
		int c1[i][n];
		for(j=0;j<n;j++)
			c1[i][j]=0;
	}		
	while(m--)
	{
		int d=0;
		scanf("%d %d",&x,&y);
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				{	
					if(c1[i]==)
					}	
				}
					s--;
				}
				if(j+1==y&&cell[i][j]!=-1)
				{
					cell[i][j]=-1;
					s--;
				}	
			}
		}
		printf("%d ",s);
		d++;
	}
	return 0;
}
