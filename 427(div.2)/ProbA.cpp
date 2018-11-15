#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s,v1,v2,t1,t2;	cin>>s>>v1>>v2>>t1>>t2;
	int T1=t1+v1*s+t1;
	int T2=t2+v2*s+t2;
	if(T1==T2)		cout<<"Friendship"<<endl;
	else if (T1<T2)	cout<<"First\n";
	else			cout<<"Second\n";
}
