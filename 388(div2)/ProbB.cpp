#include<stdio.h>
int main()
{
	int x[16],y[16];
	int xt,yt,i=0,dx,dy,flag=0,j=0;
	for(i=0;i<3;i++)
		scanf("%d %d",&x[i],&y[i]);
	int ax[3];
	int ay[3];	
	ax[0]=x[0]+x[2]-x[1];
	ay[0]=y[0]+y[2]-y[1];
	ax[1]=x[0]-x[2]+x[1];
	ay[1]=y[0]-y[2]+y[1];
	ax[2]=-x[0]+x[2]+x[1];
	ay[2]=-y[0]+y[2]+y[1];
	int m=3;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(ax[i]==x[j]&&ay[i]==y[j])
			{
				ax[i]=1000000000;
				ay[i]=1000000000;
				m--;
			}
		}
	}
	printf("%d\n",m);
	for(i=0;i<m;i++)
	{
		if(ax[i]==1000000000&&ay[i]==100000000);
		else
		{
			printf("%d %d\n",ax[i],ay[i]);
		}
	}
}
