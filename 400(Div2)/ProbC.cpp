#include<stdio.h>
#include<stdio.h>
#include<bits/stdc++.h>
//#include<unordered_map>
using namespace std;
int ssum(int arr[], int n, int sum)
{
	map<int, int> map;
    int curr_sum = 0,ans=0;
    for (int i = 0; i < n; i++)
    {
        curr_sum = curr_sum + arr[i];
        if (curr_sum == sum)
        {
                   ans++;
                   map[curr_sum] = i;
                   //curr_sum=0;
    	}
        else if (map.find(curr_sum - sum) != map.end())
        {
           ans++;
        }
        map[curr_sum] = i;
    }
    return ans;
}
int main()
{
		int n,i,k,sum1=0,sum2=0,ans=0;	scanf("%d %d",&n,&k);
		int A[n];
		int min,max;
		for(i=0;i<n;i++)
		{
				scanf("%d",&A[i]);
				if(i==0)
				{
						max=A[0];
						min=A[0];
				}
				if(A[i]>max)
					max=A[i];
				if(A[i]<min)
					min=A[i];	
				sum1+=A[i];
		}
		sum2=max-min;
		long long int p=1;
		while(p <=sum1 || p<=sum2 )
		{
			ans+=ssum(A,n,p);
			//printf("%d \n",ans);	
			p=p*k;	
			if(k==1)
				break;
		}
		printf("%d\n",ans);
}
