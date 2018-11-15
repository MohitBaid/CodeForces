#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,i;	cin>>n>>k;
	long long int A[n];
	for(i=0;i<n;i++)		cin>>A[i];
	set < pair <long long int,long long int > > s,an;
	set < pair <long long int,long long int > > :: iterator it;
	for(i=0;i<n;i++)
	{
		s.insert(make_pair(A[i]*-1,i+1));
	}
	priority_queue < pair < long long int , long long  int > pq [n],main;
	for(i=1;i<=k;i++)
	{
		pq[0].push(make_pair(A[i]*(k-i),i));
	}
	for(i=k;i<n;i++)
	{
			pq[k-i+1].push(make_pair(A[i],i))
	}
}
