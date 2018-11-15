#include<stdio.h>
#include<math.h>
int main()
{
		int n,i;	scanf("%d",&n);
		int C1[5]={0,0,0,0,0};
		int C2[5]={0,0,0,0,0};
		int A[n],B[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&A[i]);
			C1[A[i]-1]++;
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",&B[i]);
			C2[B[i]-1]++;
		}
		int flag=1,ans=0;
		for(i=0;i<5;i++)
		{
				if((C1[i]+C2[i])%2==1)
				{
						flag=0;
						break;
				}
				else
				{
					ans+=fabs(C1[i]-C2[i])/2;
				}	
		}
		if(flag)
			printf("%d\n",ans/2);
		else
			printf("-1\n");	
}
