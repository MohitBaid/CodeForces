#include<stdio.h>
int main()
{
		int n,i,k;	scanf("%d %d",&n,&k);
		int nz=0,ans=0,flag=1;
		while(nz!=k)
		{
			if(n==0)
			{
				flag=0;	
				break;
			}	
			int d=n%10;
			if(d==0)
				nz++;
			else
				ans++;	
			n=n/10;		
		}
		if(flag)
				printf("%d\n",ans);
		else
		{
			if(nz!=0)	
				printf("%d\n",nz+ans-1);
			else
				printf("%d\n",ans);
		}	
		
}
