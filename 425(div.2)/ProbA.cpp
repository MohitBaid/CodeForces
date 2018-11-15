#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k;	cin>>n>>k;
	long long int q=n/k;
	if(k>n)
		cout<<"NO\n";
	else
	{
		if(q%2==0)	cout<<"NO\n";
		else		cout<<"YES\n";
	}
}
