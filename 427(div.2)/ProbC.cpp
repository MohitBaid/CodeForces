#include<bits/stdc++.h>
using namespace std;
struct star
{
	int x;
	int y;
	int s;
};
long long int A[105][105][11]={0};
long long int B[105][105]={0};
int main()
{
	int n,q,c,i;	cin>>n>>q>>c;
	star s[n];
	for(i=0;i<n;i++)		cin>>s[i].x>>s[i].y>>s[i].s;
	int j=0,k;
	for(i=0;i<n;i++)
	{
		A[s[i].x][s[i].y][0]+=s[i].s;
		B[s[i].x][s[i].y]++;
	}
	for(i=0;i<102;i++)
		for(j=0;j<102;j++)
			for(k=1;k<10;k++)
			{
				A[i][j][k]=(A[i][j][k-1]+1)%c;
			}
	for(i=0;i<102;i++)
	{
		for(j=1;j<102;j++)
		{
			for(k=0;k<10;k++)				A[i][j][k]+=A[i][j-1][k];
			B[i][j]+=B[i][j-1];
		}
	}
	while(q--)
	{
		long long int t,x1,x2,y1,y2;	cin>>t>>x1>>y1>>x2>>y2;
		long long int sum=0,num=0;
		t=t%(c+1);
		for(i=x1;i<=x2;i++)
		{
			sum+=(A[i][y2][t]-A[i][y1-1][t]);
			num+=(B[i][y2]-B[i][y1-1]);
		}
		cout<<sum<<endl;	
	}
}
