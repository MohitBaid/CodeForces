#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,t;	scanf("%d",&N);
	int A[2*N];
	int m=0,p=0,ans=0,f=1;
	for(t=0;t<2*N;t++)
	{
		char ch[100];int n;	scanf("%s",ch);
		if(strcmp(ch,"add")==0)
		{
				scanf("%d",&n);
				A[m++]=n;	
		}
		else
		{
			if(A[m-1]==f)
			{
				m--;
				f++;
			}
			else
			{
				ans++;
				sort(A,A+m, greater<int>());
				m--;
				f++;
			}
		}
		/*for(int i=0;i<m;i++)
			printf("%d ",A[i]);
		printf("\n");	*/
	}
	printf("%d\n",ans);
}
