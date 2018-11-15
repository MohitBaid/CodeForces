#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b,c;	
	cin>>a;
	cin>>b;
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	int n=a.size(),i;
	int c1=0;
	int c2=a.size()-1;
	while(a[c1]<b[c2])
	{
		cout<<a[c1++]<<b[c2--];
		n--;
	}
	while(1)
	{
		if(n==0)
			break;
		if(n==1)
		{
			cout<<a[c1];	
			break;
		}
		if(a[c1]>b[c2])
			cout<<b[c2--]<<a[c1++];
		else
			cout<<a[c1++]<<b[c2--];
		n-=2;		
	}
	/*c[i]='\0';
	printf("%s\n",)
	cout<<c<<endl;		*/
}
