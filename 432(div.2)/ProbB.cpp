#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a1,a2,b1,b2,c1,c2;
	cin>>a1>>a2>>b1>>b2>>c1>>c2;
	if(a1*(b2-c2) + b1*(c2-a2) + c1*(a2-b2)==0)
		cout<<"No\n";
	else
	{
		if( (a2-b2)*(b2-a2) + (a1-b1)*(b1-a1) == (c2-b2)*(b2-c2) + (c1-b1)*(b1-c1) )
			cout<<"Yes\n";		
		else
			cout<<"No\n";
	}
}
