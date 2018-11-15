#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i;	cin>>n;
	long long int sum=n*(n+1)/2;
	cout<<sum%2<<endl;
	set < long long  int > s;
	set < long long  int >:: iterator it;
	sum=sum/2;
	int max=n;
	while(sum)
	{
		if(sum>max)
		{
			sum-=max;
			max--;
			s.insert(max + 1);
		}
		else
		{
			s.insert(sum);
			sum=0;
		}
	}
	if(s.size()!=n)
	{
		cout<<s.size()<<" ";
		for(it=s.begin();it!=s.end();it++)
			cout<<*it<<" ";
	}
}
