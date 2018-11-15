#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
struct f
{
	int l,r,d,c;
};
int compare (const void * a, const void * b)
{

  f *A = (f *)a;
  f *B = (f *)b;

  if(A->d==B->d)
  {
  	return A->c - B->c;
  }
  return ( A->d - B->d );
}
int main()
{
	int n,x;	cin>>n>>x;
	int i;f t[n];
	for(i=0;i<n;i++)
	{
		cin>>t[i].l>>t[i].r>>t[i].c;	t[i].d=t[i].r-t[i].l+1;
	}
	qsort(t,n,sizeof(struct f),compare);
	int l=0,r=n-1;int min=-1,flag=0;
	while(l<r)
	{
		if(t[l].d+t[r].d==x)
		{
			if(t[r].r<t[l].l ||t[l].r<t[r].l)
			{
				flag=1;
				int temp=t[l].c+t[r].c;
				if(temp<min)		min=temp;
				if(min==-1)			min=temp;
			}
			int k=r;
			while(t[l].d+t[k].d==x)
			{
				if(t[l].r<t[k].l ||t[k].r<t[l].l)
				{
					int temp=t[l].c+t[k].c;
					if(temp<min)		min=temp;
					if(min==-1)			min=temp;
				}
				k--;
			}		
			l++;
		}
		else if(t[i].d+t[r].d>x)
			r--;
		else if(t[i].d+t[r].d<x)
			l++;		
	}
	/*l=0,r=n-1;
	while(l<r)
	{
		if(t[l].d+t[r].d==x && (t[r].r<t[l].l ||t[l].r<t[r].l) )
		{
			flag=1;
			int temp=t[l].c+t[r].c;
			if(temp<min)
				min=temp;
			if(min==-1)
				min=temp;	
			r--;
		}
		else if(t[i].d+t[r].d>x)
			r--;
		else if(t[i].d+t[r].d<x)
			l++;
		else
			r--;			
	}*/
	if(flag)			cout<<min<<endl;
	else				cout<<"-1"<<endl;
}
