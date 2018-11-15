#include<stdio.h>
#include<bits/stdc++.h>
int main()
{
		int n,k,x,i;	scanf("%d %d %d",&n,&k,&x);
		int A[n];
		for(i=0;i<n;i++)
			scanf("%d",&A[i]);
		std::sort(A,A+n);
		if(k%2)
		{
			for(i=0;i<n;i=i+2)
				A[i]=A[i]^x;
			std::sort(A,A+n);
			printf("%d %d\n",A[n-1],A[0]);		
		}	
		else
			printf("%d %d\n",A[n-1],A[0]);
}
