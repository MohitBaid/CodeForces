#include<stdio.h>
int main()
{
	int n,m,i,j;	scanf("%d %d",&n,&m);
	char ch[n][m+2];
	int A[n][3];
	char ans[n+1];
	int c[3]={-1,-1,-1};
	for(i=0;i<n;i++)
	{
			A[i][0]=-1;
			A[i][1]=-1;
			A[i][2]=-1;
			scanf("%s",ch[i]);
			ans[i]=ch[i][0];
			for(j=0;ch[i][j]!='\0';j++)
			{
				int d=(int)ch[i][j];
				if(ch[i][j]=='#'||ch[i][j]=='*'||ch[i][j]=='&')
					if(A[i][0]==-1)
						A[i][0]=j;
				if(d>96&&d<123)
					if(A[i][1]==-1)
						A[i][1]=j;
				if(d>47&&d<58)
					if(A[i][2]==-1)
					A[i][2]=j;		
			}
			
	}
	ans[i]='\0';
/*	for(i=0;i<n;i++)
	{
		printf("%d %d %d\n",A[i][0],A[i][1],A[i][2]);
	}	*/
	for(i=0;i<n;i++)
	{
		int d=(int)ans[i];
		if(ans[i]=='#'||ans[i]=='*'||ans[i]=='&')
				c[0]=1;
		if(d>96&&d<123)
				c[1]=1;
		if(d>47&&d<58)
				c[2]=1;		
	}
	int a=0,flag=1;
	for(i=0;i<3;i++)
	{
			if(c[i]==-1)
			{
				int min=1000000;
				int d;
				for(j=0;j<n;j++)
				{
					d=A[j][i];
					if(d!=-1)
					{
						if(d>n/2)
							d=n-d;
						if(min>d)
							min=d;
					}			
				}
				if(min==1000000)
				{
					flag=0;
					break;
				}
				else		
					a+=min;	
			}
	}
	if(flag)
		printf("%d",a);
	else
		printf("-1",a);	
	
}
