#include<bits/stdc++.h>
using namespace std;
int mp[10000][2];
int F[1000];
int main()
{
	int n,m,i;	cin>>n>>m;
	bool flag=false;
	int cap=-1;
	set < int > ans;
	set < pair < int , int > > :: iterator it,jt;
	for(i=0;i<m;i++)			cin>>mp[i][0]>>mp[i][1];
	for(cap=1;cap<=100;cap++)
	{
		for(i=1;i<=100;i++)	F[i]=ceil(i*1.0/cap);
		flag=true;
		for(i=0;i<m;i++)
		{
			if(F[mp[i][0]]!=mp[i][1])
			{
				flag=false;
				break;
			}
		}
		if(flag)	/*cout<<cap<<endl,*/ans.insert(F[n]);
	}
	if(ans.size()==1)	cout<<*(ans.begin());
	else				cout<<"-1";
}
