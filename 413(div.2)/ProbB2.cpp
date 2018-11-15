#include<bits/stdc++.h>
using namespace std;
int  main()
{
	int n,i;	scanf("%d",&n);
	int p[n];
	int a[n];
	int b[n];
	for(i=0;i<n;i++)
		scanf("%d",&p[i]);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	multiset <int> m1,m2,m3;
	for(i=0;i<n;i++)
	{
		if(a[i]==1)
			m1.insert(p[i]);
		if(a[i]==2)
			m2.insert(p[i]);
		if(a[i]==3)
			m3.insert(p[i]);		
		if(b[i]==1)
			m1.insert(p[i]);
		if(b[i]==2)
			m2.insert(p[i]);
		if(b[i]==3)
			m3.insert(p[i]);		
	}
	multiset <int >:: iterator it; 
	int m;	cin>>m;
	while(m--)
	{
		int temp;	cin>>temp;
		if(temp==1)
		{
			if(m1.size()==0)
				cout<<"-1\n";
			else
			{
				int p=*m1.begin();
				cout<<p<<" ";
				m1.erase(m1.begin());
				it=m1.find(p);
				if(it==m1.end())
				{
					it=m2.find(p);		
					if(it==m2.end())
					{
						it=m3.find(p);
						m3.erase(it);	
					}
					else
						m2.erase(it);	
				}
				else
					m1.erase(it);	
			}	
		}
		else if(temp==2)
		{
			if(m2.size()==0)
				cout<<"-1\n";
			else
			{
				int p=*m2.begin();
				cout<<p<<" ";
				m2.erase(m2.begin());
				it=m1.find(p);
				if(it==m1.end())
				{
					it=m2.find(p);		
					if(it==m2.end())
					{
						it=m3.find(p);
						m3.erase(it);	
					}
					else
						m2.erase(it);	
				}
				else
					m1.erase(it);	
			}	
		}
		if(temp==3)
		{
			if(m3.size()==0)
				cout<<"-1\n";
			else
			{
				int p=*m3.begin();
				cout<<p<<" ";
				m3.erase(m3.begin());
				it=m1.find(p);
				if(it==m1.end())
				{
					it=m2.find(p);		
					if(it==m2.end())
					{
						it=m3.find(p);
						m3.erase(it);	
					}
					else
						m2.erase(it);	
				}
				else
					m1.erase(it);	
			}	
		}	
	}
}
	
	
