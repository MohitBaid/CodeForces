#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,n,s,p;	cin>>k>>n>>s>>p;
	int m=ceil(n*1.0/s);
	m=m*k;
	//cout<<m<<endl;
	m=ceil(m*1.0/p);
	cout<<m<<endl;	
}
