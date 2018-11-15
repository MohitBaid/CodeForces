#include<bits/stdc++.h>
using namespace std;
int  main()
{
		int n,t,k,d;
		scanf("%d %d %d %d",&n,&t,&k,&d);
		int f1=n;
		int f2=n;
		int t1=0;
		int t2=0;
		int i=1;
		int flag=0;
		while(f1>0||f2>0)
		{
			if(i>0 && i%t==0)
			{
				if(f2>0)
				{
					t2=i;
					f2-=k;
				}
				if(f1>0)
				{
					t1=i;
					f1-=k;
				}
			}
			if(i==d)		flag=1;	
			if(flag)
			{
				if(i!=d && (i-d)%t==0)
				{
					if(f2>0)
					{
						t2=i;
						f2-=k;
					}
				}
			}
			//cout<<i<<" "<<f1<<" "<<t1<<" "<<f2<<" "<<t2<<endl;
			i++;
		}
		//cout<<t1<<" "<<t2<<endl;
		if(t1<=t2)
			printf("NO\n");
		else
			printf("YES\n");	
				
}
