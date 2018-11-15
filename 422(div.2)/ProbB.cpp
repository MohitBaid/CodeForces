#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n;	cin>>n>>m;
	char ch2[n+2],ch1[m+2];
	cin>>ch2>>ch1;
	int i,j,p=-1,min=100000;
	for(i=0;ch1[i]!='\0';i++)
	{
		int temp=0,flag=0;
		for(j=0;ch2[j]!='\0';j++)
		{
			if(i+n>m)				continue;
			if(ch1[i+j]!=ch2[j])	temp++;	
			flag=1;
		}
		if(min>temp && flag==1)
		{
			min=temp;
			p=i;
			//cout<<min<<" "<<i<<endl;
		}
	}
	//cout<<min<<p<<endl;
	cout<<min<<endl;
	for(i=p;i<p+n;i++)
	{
		if(ch1[i]!=ch2[i-p])
			cout<<(i-p+1)<<" ";
	}
}
