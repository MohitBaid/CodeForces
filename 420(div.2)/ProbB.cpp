#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,b,i,j;	scanf("%d %d",&m,&b);
	long long int ans=0,temp=0,ans2=0;
	for(i=0;;i=i+m)
	{
		long long int l=b-i/m;
		long long int w=i;
		if(l<0)		break;
		if(l==0 && w==0)	break;
		temp+=((l)*(l+1))/2;
		ans=temp*(w+1);
		ans+= ((l+1)*((w*(w+1))/2));
		//cout<<ans<<" "<<i<<" "<<l<<" "<<w<<endl;
		if(ans>ans2)		ans2=ans;	
		temp=0;
		ans=0;
	}
	printf("%lld\n",ans2);
}
