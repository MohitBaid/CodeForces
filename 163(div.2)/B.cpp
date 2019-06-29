#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main()
{
	int n,i,ans=0,t;
	cin>>n>>t;
	string s,s2;
	cin>>s;
	s2 = s;
	while(t--)
	{
		for(i=0;i<n-1;i++)
		{
			if(s[i] == 'B' && s[i+1] == 'G')
			{
				s2[i] = 'G';
				s2[i+1] = 'B';
				i++;
			}
			else
				s2[i] = s[i];	
		}
		//cout<<s2<<" "<<s<<" "<<endl;
		s = s2;
		//cout<<s<<endl;
	}
	cout<<s<<endl;

}