#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
long long int pow(int n)
{
	if(n==0)	return 1;
	if(n==1)	return 2;
	if(n==2)	return 4;
	long long int temp=pow(n/2);
	if(n%2)
	{
		return (((temp*temp)%MOD)*temp)%MOD;
	}
	else
	{
		return ((temp*temp)%MOD)%MOD;
	}
}
int main()
{
	long long int n,m,k,temp;	cin>>n>>m>>k;
	if(n>m)
	{
		temp=n;
		n=m;
		m=temp;
	}
	
	
	long long int an=pow(n-1);
	long long int am=pow(m-1);
	cout<<(an*am)%MOD<<endl;
}
