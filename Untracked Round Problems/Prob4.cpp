#include<stdio.h>
#define MOD 1000003
long long int gcd(long long int n1, long long int n2)
{
    if (n2!=0)
       return gcd(n2, n1%n2);
    else 
       return n1;
}
int main()
{
	long long int n,k,g;
		scanf("%I64d %I64d",&n,&k);
	if(k>n)
		printf("1 1");
	g=gcd(n,k);		
	n=n/g;
	k=k/g;
	printf("%I64d %I64d",k%MOD,n%MOD);		
}
