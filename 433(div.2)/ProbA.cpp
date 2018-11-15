#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;	cin>>n;
	int a,b,i;
	int c=n/2;
	if(n%2==1)
	{
		cout<<n/2<<" "<<(n/2)+1;
	}
	else
	{
		a=c;
		b=c;
		while(1)
		{
			if(__gcd(a,b)==1)
				break;
			a--;
			b++;	
		}
		cout<<a<<" "<<b<<endl;
	}
}
