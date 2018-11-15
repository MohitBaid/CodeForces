#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k,f=1;	cin>>n>>k;
	while(k--)	f=f*10;
	long long int temp=__gcd(f,n);
	cout<<f*n/temp<<endl;
}
