#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,h;	cin>>n>>h;
	double area=h/2.0;
	double a=area/n;
	double p=a;
	for(int i=0;i<n-1;i++)
	{
		double h1=2*a*h;
		h1=sqrt(h1);
		printf("%lf ",h1);
		a=a+p;
	}	
}
