#include<bits/stdc++.h>
using namespace std;
struct op
{
	char ch;
	int k;
};
int main()
{
	int n,i,z;	cin>>n;
	struct op A[n];
	int Z[10];
	int O[10];
	int pow=1;
	for(i=0;i<n;i++)	cin>>A[i].ch>>A[i].k;
	for(z=0;z<10;z++)
	{
		Z[z]=0;	O[z]=1;
		for(i=0;i<n;i++)
		{
			int temp=A[i].k;
			temp=temp&pow;
			if(A[i].ch=='|')
			{
				if(temp==0);
				else
				{
					Z[z]=1;
					O[z]=1;
				}
			}
			if(A[i].ch=='&')
			{
				if(temp!=0);
				else
				{
					Z[z]=0;
					O[z]=0;
				}
			}
			if(A[i].ch=='^')
			{
				if(temp==0);
				else
				{
					if(Z[z]==0)	Z[z]=1;
					else		Z[z]=0;
					if(O[z]==0)	O[z]=1;
					else		O[z]=0;
				}
			}
		}
		pow=pow*2;
	}
	int Z2[10],O2[10];
	for(i=9;i>=0;i--)	Z2[9-i]=Z[i];	
	for(i=9;i>=0;i--)	O2[9-i]=O[i];
	for(i=9;i>=0;i--)	Z[i]=Z2[i];	
	for(i=9;i>=0;i--)	O[i]=O2[i];
	int an[10],xo[10],o[10];
	for(i=9;i>=0;i--)
	{
		an[i]=1,xo[i]=0,o[i]=0;
		if(Z[i]==0 && O[i]==0)		an[i]=0;
		if(Z[i]==0 && O[i]==1);
		if(Z[i]==1 && O[i]==0)		xo[i]=1;
		if(Z[i]==1 && O[i]==1)		o[i]=1;
	}
	cout<<"3"<<endl;
	pow=512;
	long long int r=0,t=0,y=0;
	for(i=0;i<10;i++)
	{
		if(an[i])		r+=pow;
		if(o[i])		t+=pow;
		if(xo[i])		y+=pow;
		pow=pow/2;
	}
	cout<<"& "<<r<<endl;
	cout<<"| "<<t<<endl;
	cout<<"^ "<<y<<endl;
}
