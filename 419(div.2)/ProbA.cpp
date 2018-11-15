#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,ans=0;	scanf("%d:%d",&a,&b);
	while(1)
	{
		int c=b;
		int d=0;
		while(c>0)
		{
			d=d*10+c%10;
			c=c/10;
		}
		if(a==d)
			break;
		b++;
		if(b==60)
		{
			a++;
			b=0;
		}
		if(a==24)
			a=0;
		ans++;			
	}	
	printf("%d\n",ans);
}
