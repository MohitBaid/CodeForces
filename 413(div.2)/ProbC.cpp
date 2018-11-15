#include<bits/stdc++.h>
using namespace std;
struct foun
{
	int b;
	int p;
};
int compare (const void * a, const void * b)
{

  foun *A = (foun *)a;
  foun *B = (foun *)b;

  return ( B->p - A->p );
}
int  main()
{
	int n,c,d,i;	scanf("%d %d %d",&n,&c,&d);
	struct foun co[n],di[n];
	int cou=0,dia=0;
	for(i=0;i<n;i++)
	{
		int t1,t2;
		char ch;
		cin>>t1>>t2>>ch;
		if(ch=='C')
		{
			co[cou].b=t1;
			co[cou++].p=t2;
		}
		else
		{
			di[dia].b=t1;
			di[dia++].p=t2;
		}
	}
	qsort(co,cou,sizeof(foun),compare);
	qsort(di,dia,sizeof(foun),compare);
	int ans=0;
	int l=0,r=cou-1;
	int temp=0;
	while(l<r)
	{
		 if(co[l].p+co[r].p==c)
		 {
			if(co[l].b+co[r].b>temp)
			 		temp=co[l].b+co[r].b;
			break;
		 }
         else if(co[l].p + co[r].p < c)
         {
              l++;
              if(co[l].b+co[r].b>temp)
			 		temp=co[l].b+co[r].b;  
		}
         else
              r--;
    }
	if(ans<temp)
		ans=temp;
	l=0,r=dia-1;
	temp=0;
	while(l<r)
	{
		 if(di[l].p+di[r].p==d)
		 {
             if(di[l].b+di[r].b>temp)
			 		temp=di[l].b+di[r].b;
		   	break;
		 }
         else if(di[l].p + di[r].p < d)
         {
              l++;
              if(di[l].b+di[r].b>temp)
			 		temp=di[l].b+di[r].b;  
		 }
         else // A[i] + A[j] > sum
              r--;
    }
	if(ans<temp)
		ans=temp;
	int temp1=0,temp2=0;			    
	for(i=0;i<cou;i++)
	{
		if(co[i].p<=c)
		{
			if(temp1<co[i].b)
				temp1=co[i].b;
		}
	}
	for(i=0;i<dia;i++)
	{
		if(di[i].p<=d)
		{
			if(temp2<di[i].b)
				temp2=di[i].b;
		}
	}
	//cout<<temp1<<" "<<temp2<<endl;
	if(temp1!=0 && temp2!=0)
	{
		if(ans<temp1+temp2)
			ans=temp1+temp2;
		cout<<ans<<endl;	
	}
	else
	{
		cout<<ans<<endl;
	}		
}
