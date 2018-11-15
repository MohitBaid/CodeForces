#include<bits/stdc++.h>
using namespace std;
main()
{
	double n,k,d,i,m; 
	long long int ans=-1;	cin>>n>>k>>m>>d;
	for(i=0;i<d;i++)
	{
		double n1=k*i +1;
		long long int item=min((n/n1),m);
		double temp=(double)item*(i+1);
		if(ans<temp)
			ans=temp;
		
	}
	cout<<ans<<endl;
}
