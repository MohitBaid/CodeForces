#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;	cin>>n;
	int o1=0,o2=0;
	while(n--)
	{
		int temp;
		cin>>temp;
		if(temp==2)	o2++;
		else		o1++;
	}
	int a1=0,a2=0;
	a1=(o1/3) + min(o2,o1%3);
	a2=min(o2,o1) + (o1-min(o2,o1))/3;
	cout<<max(a1,a2)<<endl;	
}
