#include<stdio.h>
int main()
{
	int i,k=1;
	long int n;
	scanf("%ld",&n);
	char s[n];long int pos[n];long int m=0;
	scanf("%s",s);
	for(i=0;i<n;i++)
		scanf("%ld",&pos[i]);
	//printf("%I64d",pos[n-1]);	
	int c=pos[n-1];
	while(m<=c/2)
	{
		
		for(i=0;i<n;i++)
		{
			if(s[i]=='R')
				pos[i]++;
			else			
				pos[i]--;				
		}	
		m++;			
		for(i=0;i<n;i=i+2)
		{
			if(pos[i]==pos[i+1]||pos[i+1]==pos[i+2]&&n>=2)
				{
					printf("%ld",m);
					return 0;
				}	
			/*if(m==pos[n-1])
				k=0;*/
		}
	}		
		//printf("%I64dKKKKKKKKK%I64d",pos[0],pos[1]);
		printf("-1");
		return 0;
}
