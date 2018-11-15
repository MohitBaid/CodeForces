#include<stdio.h>
int main()
{
	long long int b,d,s;	
	scanf("%lld %lld %lld",&b,&d,&s);
	if(s==b&&s==d)
		printf("0\n");
	else if((s==d&&s<b)||(s==b&&s<d))
	{
		d-=s;
		b-=s;
		s-=s;
		//printf("%lld %lld %lld------1\n",b,d,s);
		if(b>d)
			printf("%lld\n",(b-1)*2);
		else 
			printf("%lld\n",(d-1)*2);
	}
	else if(s<b&&s<d)
	{
		d-=s;
		b-=s;
		s-=s;
		//printf("%lld %lld %lld------1\n",b,d,s);
		if(b>d)
			printf("%lld\n",(b-1));
		else 
			printf("%lld\n",(d-1));
	}
	else if((b==s&&b<d)||(b==d&&b<s))
	{
		d-=b;
		s-=b;
		b-=b;
		//printf("%lld %lld %lld-----2\n",b,d,s);
		if(s>d)
			printf("%lld\n",(s-1)*2);
		else 
			printf("%lld\n",(d-1)*2);
	}
	else if(b<d&&b<s)
	{
		d-=b;
		s-=b;
		b-=b;
		//printf("%lld %lld %lld-----2\n",b,d,s);
		if(s>d)
			printf("%lld\n",(s-1));
		else 
			printf("%lld\n",(d-1));
	}
	else if((d==s&&d<b)||(d==b&&d<s))
	{
		b-=d;
		s-=d;
		d-=d;
		//printf("%lld %lld %lld--------3\n",b,d,s);
		if(b>s)
			printf("%lld\n",(b-1)*2);
		else 
			printf("%lld\n",(s-1)*2);
	}
	else if(d<s&&d<b)
	{
		b-=d;
		s-=d;
		d-=d;
		//printf("%lld %lld %lld--------3\n",b,d,s);
		if(b>s)
			printf("%lld\n",(b-1));
		else 
			printf("%lld\n",(s-1));
	}			
	return 0;
}
