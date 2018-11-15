#include<stdio.h>
int main()
{
	int n,k,i,j,m2;
	scanf("%d %d",&n,&k);
	int C[n];
	int K[k];
	long val=0,m;
	scanf("%d",&C[0]);
	m=C[0];
	for(i=1;i<n;i++)
	{
		scanf("%d",&C[i]);
		val+=C[i]*C[i-1];
		m=m+C[i];
		if(i==n-1)
			val+=C[i]*C[0];
	}	
	for(i=0;i<k;i++)
	{
		scanf("%d",&K[i]);
		K[i]--;
		if(K[i]==0)
		{
				j=C[0]+C[1]+C[n-1];
				m2=m-j;
				val+=(m2*C[0]);
				m=m-C[K[i]];
				C[K[i]]=0;
		}
		else if(K[i]==n-1)
		{

				j=C[0]+C[n-2]+C[n-1];
				m2=m-j;
				val+=(m2*C[n-1]);
				m=m-C[K[i]];
				C[K[i]]=0;		
		}
		else
		{
			j=C[K[i]]+C[K[i]-1]+C[K[i]+1];
			m2=m-j;
			val+=(m2*C[K[i]]);
			m=m-C[K[i]];
			C[K[i]]=0;	
		}
	}		
	printf("%I64d\n",val);
	return 0;
}
