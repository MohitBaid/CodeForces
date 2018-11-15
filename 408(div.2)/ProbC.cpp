#include<bits/stdc++.h>
using namespace std;
struct num
{
	int deg;
	int i;	
	bool operator<(const num& rhs) const
    {
        return deg < rhs.deg;
    }
};
int main()
{
	int n,i,j,k;	scanf("%d",&n);
	int A[n];
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	sort(A,A+n);
	int ans=0;
	int deg[300005]={0};
	int hack[3000005]={0};
	int e=n-1;
	list<int> adj[n];
	while(e--)
	{
		int s,d;
		scanf("%d %d",&s,&d);
		deg[s-1]++;
		deg[d-1]++;
		adj[s-1].push_back(d-1);
		adj[d-1].push_back(s-1);
	}
	num s[n];
	priority_queue<num> pq;
	for(i=0;i<n;i++)
	{
		s[i].deg=deg[i];
		s[i].i=i;
		pq.push(num{deg[i],i});
	}
	
	for(i=0;i<n;i++)
	{
		if(i!=p)	
			A[i]+=deg[i];
	}
	sort(A,A+n);		
	printf("%d\n",ans+A[n-1]-1);				
}
