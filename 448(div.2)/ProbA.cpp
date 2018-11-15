#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j;	cin>>n;
	int A[n],B[n];
	for(i=0;i<n;i++)	cin>>A[i];
	int ans=360;
	for(j=0;j<n;j++)
	{
		int s=A[j];
		i=j;
		while(1)
		{
			if(s>180)	
			{
				s=s-A[i];	
				break;
			}
			else
			{
				i=(i+1)%n;
				s=s+A[i];
			}
		}
		ans=min(ans,abs(360-2*s));
		s=A[j];
		i=j;
		if(i<0)	i=i+n;
		while(1)
		{
			if(s>180)	
			{
				s=s-A[i];	
				break;
			}
			else
			{
				i--;
				if(i<0)	i=i+n;
				s=s+A[i];
			}
		}
		ans=min(ans,abs(360-2*s));
	}
	cout<<ans<<endl;
}
