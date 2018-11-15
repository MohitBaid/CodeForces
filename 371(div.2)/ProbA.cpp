#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int L1,R1,L2,R2,K,a1,a2,ans;	
	scanf("%lld %lld %lld %lld %lld",&L1,&R1,&L2,&R2,&K);
	if(L2>L1)
		a1=L2;
	else
		a1=L1;
	if(R2>R1)
		a2=R1;
	else
		a2=R2;
	ans=a2-a1+1;				
	if(K<=a2&&K>=a1)
		ans--;
	if(ans>=0)
		printf("%lld\n",ans);
	else
		printf("0\n",ans);		
	fflush(stdout);	
	return 0;	
}
