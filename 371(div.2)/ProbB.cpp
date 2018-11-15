#include<stdio.h>
int main()
{
	int n,i;
	long long int min=0,max=0,temp;
			scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&temp);
		if(temp>max)
			max=temp;
		if(temp<min)
			min=temp;	
	}
	if(max-min<=3)
		printf("YES");
	else
		printf("NO");
	fflush(stdout);		
}
