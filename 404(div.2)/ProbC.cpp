#include<stdio.h>
#include<math.h>
int main()
{
		long long int n,m,p,c;	scanf("%lld %lld",&n,&m);
		c=(m*m)-(m)-(2*n)+2;
		//printf("%lld\n",c);
		c=(c*4);
		//printf("%lld\n",c);
		c=1-c;
		//printf("%lld\n",c);
		c=ceil(sqrt(c)*1.0);
		//printf("%lld\n",c);
		c=c-1;
		//printf("%lld\n",c);
		c=ceil(c/2.0);
		//printf("%lld\n",c);
		c=c+m;
		printf("%lld\n",c);
}
