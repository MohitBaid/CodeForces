#include<bits/stdc++.h>
using namespace std;
int main()
{
	int A[]={31,28,31,30,31,30,31,31,30,31,30,31}; 
	int B[100],i,j;
	for(i=0;i<7;i++)
	{
		for(j=0;j<12;j++)
		{
			B[i*12 + j]=A[j];
			if(i==3  && j==1)
				B[i*12 + j]++;
		}
	}
	for(i=0;i<7;i++)
	{
		for(j=0;j<12;j++)
		{
			cout<<B[i*12 + j]<<" ";
		}
		cout<<endl;
	}
	int n;	cin>>n;
	int C[n];
	for(i=0;i<n;i++)	cin>>C[i];
	int m=0,f=0;
	for(i=0;i<84-n;i++)
	{
		if(B[i]==C[m])
		{
			f=1;
			for(j=1;j<n;j++)
			{
				if(C[j]!=B[i+j])
				{
					f=0;
					break;
				}
			}
			if(f==1)
			{
				break;
			}
		}
		m=0;
	}
	if(f==1)	cout<<"YES"<<endl;
	else		cout<<"NO"<<endl;
}
