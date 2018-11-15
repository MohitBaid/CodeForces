#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;	cin>>n;
	set < int > s;
	set < int > :: iterator it;
	for(i=0;i<n;i++)
	{
		int temp;	cin>>temp;
		s.insert(temp * -1);
	}
	for(it=s.begin();it!=s.end();it++)
	{
		int m=(*it)*-1;
		if(m<0)
		{
			cout<<m<<endl;
			break;
		}
		else
		{
			int q=sqrt(m);
			if(q*q==m);
			else
			{
				cout<<m<<endl;
				break;
			}	
		}
	}
}
