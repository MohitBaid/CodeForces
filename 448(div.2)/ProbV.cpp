#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j;	cin>>n;
	int A[n],B[n];
	for(i=0;i<n;i++)	cin>>A[i],B[i]=A[i];
	sort(A,A+n);
	int s[n][n];
	for(i=1;i<n;i++)
		B[i]+=B[i-1];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			s[i][j]=0;
			if(i==0)	s[i][j]=B[j];
			else		s[i][j]=B[j]-B[i-1];
		}
	}
	int ans=360;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			ans=min(ans,abs(360-s[i][j]-s[i][j]));
		}		
	cout<<ans<<endl;
}
