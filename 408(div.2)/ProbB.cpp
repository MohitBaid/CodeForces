#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;
        if (arr[mid] == x)  return mid;
        if (arr[mid] > x) return binarySearch(arr, l, mid-1, x);
        return binarySearch(arr, mid+1, r, x);
   } 
   return -1;
}
int main()
{
	int n,i,m,j,k;	scanf("%d %d %d",&n,&m,&k);
	int A[m];
	for(i=0;i<m;i++)
			scanf("%d",&A[i]);
	sort(A,A+m);
	int b=1;
	int f;
	f=binarySearch(A,0,m,1);
	if(f!=-1)
			printf("1\n");
	else
	{		
		while(k--)
		{
			int u,v;	scanf("%d %d",&u,&v);
			if(u==b)
			{
				f=binarySearch(A,0,m,v);
				if(f==-1)
					b=v;
				else
				{
					b=v;
					break;
				}			
				
			}
			else if(v==b)
			{
				f=binarySearch(A,0,m,u);
				if(f==-1)
					b=u;
				else
				{
					b=u;
					break;
				}
			}
				
		}
		printf("%d\n",b);
	}
}
