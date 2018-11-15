#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,t;	cin>>s;
	int l=0,i,j;
	set < char > vow;
	vow.insert('a');
	vow.insert('e');
	vow.insert('i');
	vow.insert('o');
	vow.insert('u');
	for(i=0;i<s.size();i++)
	{
		if(vow.find(s[i])!=vow.end())
		{
			int len=1;
			for(j=1;j<t.size();j++)
			{
				if(len==3)
				{
					cout<<" ";
					len=0;
				}
				cout<<t[j-1];
				if(j>0 && t[j]!=t[j-1])
					len++;
				cout<<len;
			}
			if(len==3)		cout<<" ";
			if(t.size())	cout<<t[j-1];
			t.clear();
			cout<<s[i];
		}
		else
		{
			t+=s[i];
		}	
	}
	int len=1;
	for(j=1;j<t.size();j++)
	{
		if(len==3)
		{
			cout<<" ";
			len=0;
		}
		cout<<t[j-1];
		if(j>0 && t[j]!=t[j-1])
			len++;
	}
	if(len==3)	cout<<" ";
	if(t.size())cout<<t[j-1];
	t.clear();
	cout<<s[i];
}
