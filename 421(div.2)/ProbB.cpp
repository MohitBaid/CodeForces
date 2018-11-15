#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a;	cin>>n>>a;
	double an=1.0*(n-2)*180;
	an=an/n;
	double f=1.0*an/(n-2);
	//double g=f*(n-2);
	//printf("%f %f %f\n",an,f,g);
	printf("1 2 ");
	double min=fabs(an-a);
	int ans=3;
	//cout<<min<<endl;
	for(int i=4;i<=n;i++)
	{
		an=an-f;
		double temp2=fabs(an-a);
		//cout<<temp2<<endl;
		if(temp2<min)
		{
			min=temp2;
			ans=i;
		}		
	}
	cout<<ans<<endl;
}
