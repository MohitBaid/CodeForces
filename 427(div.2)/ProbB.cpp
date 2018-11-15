#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k;	cin>>k;
	string c;	cin>>c;
	int sum=0;
	int A[10]={0};
	for(int i=0;c[i]!='\0';i++)
	{
		char ch=c[i];
		int t=ch-'0';
		sum+=t;
		A[t]++;
	}
	if(sum>=k)	cout<<"0\n";
	else 
	{
		int diff=k-sum;
		int ans=0;
		int j=0;
		while(diff>0)
		{
		 	if(A[j]==0)
		 		j++;
		 	else
			{	
				diff-=abs(9-j);
			 	A[j]--;
			 	ans++;
			}
		}
		cout<<ans<<endl;
	}
}
