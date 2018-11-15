#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;		cin>>n;
	int A[n];
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
	if(A[0]%2==0)				cout<<"No\n";
	else if(A[n-1]%2==0)		cout<<"No\n";
	else
	{
		if(n%2)					cout<<"Yes\n";
		else					cout<<"no\n";
	}
}
