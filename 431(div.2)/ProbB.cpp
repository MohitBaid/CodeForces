#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,temp;
	set < long long int > s;
	cin>>n;
	long long int A[n];
	for(i=1;i<=n;i++)
	{
		cin>>A[i];
		if(i>1)
		{
			temp=(A[i]-A[i-1]);
			s.insert(temp);
		}
	}
	if(s.size()==2)	cout<<"Yes\n";
	else			cout<<"No\n";
}
