#include<bits/stdc++.h>
#define MOD 100000000000000007
using namespace std;
map < long long int,long long int > mp,mp2,mp3;
int main()
{
	long long int n,x,k,i;	cin>>n>>x>>k;
	long long int A[n];
	for(i=0;i<n;i++)	cin>>A[i];
	sort(A,A+n);
	for(i=0;i<n;i++)
	{
		long long int q=A[i]/x;
		mp3[A[i]]++;
		if(A[i]%x==0)
		{
			mp2[q]++;
			mp2[q]=mp2[q]%MOD;
		}
		mp[q]++;
		mp[q]=mp[q]%MOD;		
	}
	long long ans=0;
	for(i=0;i<n;i++)
	{
		if(A[i]%x==0)
		{
			long long int q=A[i]/x + k-1;
			ans+=mp[q];
			ans=ans%MOD; 
		}
		else
		{
			long long int q=A[i]/x + k;
			ans+=mp[q];
			ans=ans%MOD; 
		}
		if(i!=n-1 && A[i+1]>A[i])	mp[A[i]/x]-=mp3[A[i]];
	}
	printf("%lld",ans);
}
