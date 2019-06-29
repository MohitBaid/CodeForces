#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main()
{
	int n,i,ans=0;
	cin>>n;
	string s;
	cin>>s;
	char c = s[0];
	for(i=1;i<n;i++)
	{
		if(s[i] == c)
			ans++;
		else
		{
			c = s[i];
		}	
	}
	cout<<ans<<endl;
}