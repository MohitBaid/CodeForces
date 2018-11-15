#include<stdio.h>


int main()
{
	int n,m,x,y,i;
	long long int min,max,ser;
	long long int k;	
	scanf("%d %d %lld %d %d",&n,&m,&k,&x,&y);
	x--;
	y--;
	long long int nr=k/m;
	int nc=k%m;
	long long int f[n];
	int fd,p;
	if(n==1)
	{
		min=max=ser=nr;
		if(nc)
			{
				max++;
				if(y<=nc--)
					ser++;
			}
	}
	else{
		if(nr>=n)
		{
			for(i=0;i<n;i++)
				f[i]=1;	
			nr=nr-n;
			long long int d=nr/(n-1);
			int g=nr%(n-1);
			for(i=1;i<n-1;i++)
				f[i]=f[i]+d;
			if(!d%2)
			{
				f[0]=d/2+f[0];
				f[n-1]=d/2+f[n-1];
				for(i=n-2;g>0;i--)
				{
					f[i]++;
					g--;
					fd=0;
					p=i;
				}
			}	
			else
			{
				f[0]=d/2+f[0]+1;
				f[n-1]=d/2+f[n-1];
				for(i=1;g>0;i++)
				{
				f[i]++;
				g--;
				fd=1;
				p=i;
			}
			}
			max=0;
			if(f[0]<f[n-1])
			min=f[0];
			else
			min=f[n-1];
			for(i=0;i<n;i++)
				if(f[i]>max)
				max=f[i];				
		}
		else
		{
		for(i=0;i<n;i++)
			if(i<=nr)
				f[i]=1;
			else
				f[i]=0;	
		nr=0;		
	}
	ser=f[x];	
		if(nc)
		{
			if(fd==1&&i!=n-1)
				{
				if(x==p+1)
				{
					if(y<=nc)
					{
							ser++;
					}
				}
			if(max==f[p+1])
						max++;
			}
			else if(fd==1&&i==n-1)
			{
				if(x==n-2)
				{
					if(y<=nc)
					{
							ser++;
					}
				}
			if(max==f[n-2])
						max++;
			}
			else if(fd==0&&i!=0)
			{
				if(x==p-1)
				{
					if(y<=nc)
					{
							ser++;
					}
				}
				if(max==f[p-1])
						max++;
			}
			else
			{
				if(x==1)
				{
					if(y<=nc-1)
					{
							ser++;
					}
				}
				if(max==f[1])
						max++;
			}
		}
	}			
	printf("%lld %lld %lld",max,min,ser);
	
}
