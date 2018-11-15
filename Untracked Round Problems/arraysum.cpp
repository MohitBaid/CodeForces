#include<stdio.h>
int main()
{
	int arr[10];int n=0;int s=0;
	while(scanf("%d",&arr[n])==1)
		{
			s=s+arr[n];
			n++;
		}	
	printf("%d",s);
}
