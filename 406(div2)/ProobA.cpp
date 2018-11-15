#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
		int n,i,j,a,b;	scanf("%d %d",&a,&b);
		int c,d,flag=0;		scanf("%d %d",&c,&d);
		for(i=b;i<=100000;i=i+a)
		{
			for(j=d;j<=i;j=j+c)
			{
					if(i==j)
					{
							printf("%d",i);
							flag=1;
							break;
					}
						
			}
			if(flag)
				break;
		}
		if(!flag)
			printf("-1");
}

