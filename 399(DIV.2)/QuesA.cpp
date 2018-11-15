#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
		int n,i,k;	scanf("%d",&n);
		int A[n];
		for(i=0;i<n;i++)
			scanf("%d",&A[i]);
		sort(A,A+n);
		k=n;
		//for(i=0;i<n;i++)
		//	printf("%d ",A[i]);
		for(i=0;i<n;i++)
			{
				if(A[i]==A[0])
					k--;
				else if(A[i]==A[n-1])
					k--;
				//printf("%d\n",k);		
			}	
		printf("%d\n",k);
}
