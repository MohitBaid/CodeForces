#include<bits/stdc++.h>
using namespace std;
int main()
{
		int n,i,j,m,p,flag=0;	cin>>n;
		int A[n][n];
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				cin>>A[i][j];
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				if(A[i][j]!=1)
				{
					flag=1;
					for(m=0;m<n;m++)
					{
						for(p=0;p<n;p++)
						{
							if(A[i][j]==A[i][m]+A[p][j])
							{
								flag=0;
								break;		
							}	
						}
						if(!flag)
							break;
					}
					if(flag)
						break;
				}
			if(flag)
				break;
		}
		if(flag)
			printf("No\n");
		else
			printf("Yes\n");						
}
