#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int k,i,c=97;	cin>>k;
	if(k==0)	cout<<"a"<<endl;
	while(k)
	{
		long long int a=0,m=0,n=1;
		while(a<=k)
		{
			m++;
			a=(m*(m+1))/2;
			n++;
		}
		n--;
		m--;
		a=(m*(m+1))/2;
		for(i=0;i<n;i++)	cout<<(char)c;
		k-=a;
		c++;
	}
}
