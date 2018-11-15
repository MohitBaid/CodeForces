#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k,i,j,c;	cin>>n>>k;
	long long int A[n];
	for(i=0;i<n;i++)		cin>>A[i];
	long long int ans=-1,mx=A[0];
	for(i=0;i<n;i++)
	{
		int t=0;
		if(i>0)			if(A[i]>A[i-1])	t++;
		for(j=i+1,c=0;c<n;c++)
		{
			if(A[i]>A[j])
				t++;
			else	break;
			j=j+1;
			j=j%n;	
		}	
		if(t>=k)
		{
			ans=A[i];
			break;
		}
		if(mx<A[i])		mx=A[i];
	}
	if(ans!=-1)		cout<<ans<<endl;
	else			cout<<mx<<endl;
}
