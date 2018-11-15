#include<bits/stdc++.h>
using namespace std;
struct shirt
{
	int p;
	int a;
};
struct c
{
	inline bool operator() (const shirt& a, const shirt& b)
	{
		  return (a.p<b.p);
	}
};
template <class T,class S> struct pair_equal_to : binary_function <T,pair<T,S>,bool> {
  bool operator() (const T& y, const pair<T,S>& x) const
    {
        return x.first==y;
  }
};
int  main()
{
	int n,i;	scanf("%d",&n);
	vector < pair <int,int> > s1;
	vector < pair <int,int> > s2;
	vector < pair< int,pair <int,int> > > s3;
	vector < pair< int,pair <int,int> > > s4;
	int p[n];
	int a[n];
	int b[n];
	for(i=0;i<n;i++)
		scanf("%d",p[i]);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	for(i=0;i<n;i++)
	{
		s1.push_back(make_pair(p[i],a[i]));
		s2.push_back(make_pair(p[i],b[i]));	
		s3.push_back(make_pair(b[i],make_pair(p[i],a[i])));
		s4.push_back(make_pair(a[i],make_pair(p[i],b[i])));
	}
	int m;	scanf("%d",&m);
	while(m--)
	{
		int temp;	scanf("%d",&temp);
		vector < pair <int,int> > :: iterator it=find_if(s1.begin(),s1.end(),bind1st(pair_equal_to<int,int>(),temp));
		if(it== s1.end())
		{
				it=find_if(s2.begin(),s2.end(),bind1st(pair_equal_to<int,int>(),temp));
				if(it==s2.end())
					printf("-1 ");
				else
				{
					printf("%d ",it->first);
					vector < pair <int ,pair <int,int> > ::*iterator it2=find_if(s4.begin(),s4.end(),bind1st(pair_equal_to pair< int ,<int,int> >(),make_pair<it->first,temp>));
					s1.erase(remove(s1.begin(),s1.end(),make_pair(it->first,it2->first),s1.end()));
				}	
		}
		else
		{
					printf("%d ",*it->first);
					vector < pair < int ,pair <int,int> > :: iterator it2=find_if(s3.begin(),s3.end(),bind1st(pair_equal_to pair< int ,<int,int> >(),make_pair<it->first,temp>));
					s1.erase(remove(s2.begin(),s2.end(),make_pair(it->first,it2->first),s2.end()));
		}	
	}			
}

