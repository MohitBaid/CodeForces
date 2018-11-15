#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,b,f,k,i;	cin>>a>>b>>f>>k;
	long long int P[k+1],ans=0;
	P[0]=f;
	for(i=1;i<k;i++)
	{
		if(i%2==1)
		{
			P[i]=(i+1)*a-f;
		}
		else
		{
			P[i]=i*a+f;
		}
	}
	long long int cap=b;
	P[k]=1LL*a*k;
	//for(i=0;i<k;i++)	cout<<P[i]<<" ";	cout<<endl;
	b-=f;
	if(b<0)
	{
		cout<<"-1\n";
		return 0;
	}
	for(i=1;i<=k;i++)
	{
		//cout<<P[i-1]<<" "<<P[i]<<" "<<b<<endl;
		if(P[i]-P[i-1]<=b);
		else
		{
			ans++;
			b=cap;
		}
		b-=(P[i]-P[i-1]);
		if(b<0)
		{
			ans=-1;
			break;
		}	
	}
	cout<<ans<<endl;
}
