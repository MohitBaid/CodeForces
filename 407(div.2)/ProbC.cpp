#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}
int main()
{
		int n,i;	scanf("%d",&n);
		int A[n],B[n-1];
		for(i=0;i<n;i++)
			cin>>A[i];
		int p=1;	
		for(i=0;i<n-1;i++)
		{
				B[i]=abs(A[i]-A[i+1])*p;
				p=p*-1;
		}
		int ans1=maxSubArraySum(B,n-1);
		for(i=0;i<n-1;i++)
			B[i]=B[i]*-1;
		int ans2=maxSubArraySum(B,n-1);
		if(ans1<0)
			ans1=ans1*-1;
		if(ans2<0)
			ans2=ans2*-1;	
		if(ans2>ans1)		
			cout<<ans2;
		else
			cout<<ans1;			
}
