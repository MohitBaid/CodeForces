#include<stdio.h>
#include<stdio.h>
#include<math.h>
#include <algorithm>
#define MOD 1000000007
long long int pow(int n)
{
	if(n==0)
		return 1;
	else if(n==1)
		return 2;
	else if(n==2)
		return 4; 					
	long long int m=pow(n/2)%MOD;
	 m=(m*m)%MOD;
	 if(n%2!=0)
			m=(m*2)%MOD;
	return m;		

}
int check(long long int n )
{
	if(n==2)	return 1;
	if(n==3)	return 2;
	if(n==4)	return 2;
	if(n==5)	return 3;
	if(n==6)	return 3;
	if(n==7)	return 3;
	if(n==8||n==9||n==10||n==11)	return 4;
	long long int q=n/3;
	long long int p=n-2*q;
	return 1+check(p+q);	
}
int main()
{
	long long int n,ans;	scanf("%lld",&n);
	ans=(sqrt(1+8*n));
	ans=ans-1;
	ans=ans/2;
	printf("%lld",ans);
	return 0;	
}
