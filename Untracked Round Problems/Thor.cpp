#include<stdio.h>
int main()
{
	int n,i,s=0,q;int ty,x,m=0,star=0,temp;	scanf("%d %d",&n,&q);
	int A[n];int B[q][2];
	for(i=0;i<q;i++)
	{
		if(i<n)
				A[i]=0;
		B[i][0]=0;
		B[i][1]=0;
	}			
	while(q--)
	{
		scanf("%d %d",&ty,&x);
		if(ty==1)
		{
			A[x-1]++;
			B[m][0]=x-1;
			B[m][1]=1;
			s++;
			m++;
			printf("%d\n",s);
		}
		if(ty==2)
		{
			temp=0;
			s=s-A[x-1];
			for(i=star;i<m;i++)
			{
				if(B[i][0]==x-1)
				{
					B[i][1]=0;
					temp++;
				}
				/*if(temp==A[x-1])	
					break;*/
			}
			A[x-1]=0;
			printf("%d\n",s);
		}
		if(ty==3)
		{
			temp=0;
			for(i=star;i<x;i++)
			{	
				if(B[i][1]==1)
					{
						temp++;
						B[i][1]=0;
						A[B[i][0]]--;
					}	
			}	
			star=x;
			s=s-temp;
			printf("%d\n",s);	
		}
	}
	return 0;
}