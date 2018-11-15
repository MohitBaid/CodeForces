#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
		int n,m,ans=0,i,j;	scanf("%d %d",&n,&m);
		for(j=0;j<m;j++)
		{
			int k;	scanf("%d",&k);
			int C[10001]={0};
			int D[10001]={0};
			int A[k];		int flag=0;
			for(i=0;i<k;i++)
			{
				scanf("%d",&A[i]);
				if(A[i]<0)
					C[(A[i]*-1)]=1;
				else
					D[A[i]]=1;	
			}	
			for(i=1;i<=10000;i++)
			{
					if(C[i]==0 && D[i]==1);
					else if(D[i]==0 && C[i]==1);
					else if(D[i]==0 && C[i]==0);
					else
					{
							flag=1;
							break;
					}
			}
			if(flag)
				ans++;
		}
		if(ans==m)
			printf("NO\n");
		else
			printf("YES\n");	
}
