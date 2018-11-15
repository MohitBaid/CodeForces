#include<stdio.h>
int main()
{
	int n,i,min1=0,min2=0;	scanf("%d",&n);
	int A[n];
	int r2=0,r1=0,r;
	for(i=0;i<n;i++)
		{
			scanf("%d",&A[i]);
			r2=r2+A[i];
		}	
	int e,s;
	scanf("%d %d",&s,&e);
	e--;
	s--;
	for(i=s;i<e;i++)
			r1+=A[i];
	int sum=r2;		
	r2=r2-r1;
	if(r2>r1)
		r=r1;
	else 
		r=r2;	
	printf("%d________%d____%d____%d______%d_____%d\n",sum,r1,r2,r,e,s);	
	int s1[s],temp=0;	
	for(i=0;i<s;i++)
		{
			temp+=A[i];
			s1[i]=temp;
			if(min1>s1[i])
				min1=s1[i];
		}
	int s2[n-e];
	for(i=e;i<n;i++)
		{
			temp+=A[i];
			s2[i]=temp;
			if(min2>s2[i])
				min2=s2[i];
		}	
	for(i=0;i<s;i++)
		printf("%d ",s1[i]);
	printf("\n%dGGGGGGGGGGGGGGGGGG%d\n",min1,min2);
	for(i=e;i<n;i++)
		printf("%d ",s2[i]);			
	return 0;		
}
