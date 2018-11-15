#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;	cin>>n>>k;
	int min1,max;	
	if(k==0)			min1=0,max=0;
	else if (k==n)		max=0,min1=0;
	else				
	{
		min1=1;
		max=min(2*k,n-k);
	}
	cout<<min1<<" "<<max<<endl;	
}
