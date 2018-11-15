#include<stdio.h>
int main()
{
	int n,i,m=0,c=0;	scanf("%d",&n);
	int M[n],C[n];
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&M[i],&C[i]);
		if(M[i]>C[i])
			m++;
		else if(M[i]<C[i])
			c++;				
	}
	if(m>c)
		printf("Mishka\n");
	else if(m<c)
		printf("Chris\n");
	else 
		printf("Friendship is magic!^^\n");
	return 0;	
}	
