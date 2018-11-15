#include<stdio.h>
int check(int n)
{
  for(int i = 2; i*i <= n; i++)
  {
      if(n%i == 0)
      {
          return 0;
      }
  }
	return 1;
}
int main()
{
		int n,i;	scanf("%d",&n);
		if(n==1)
		{
				printf("1\n");
				printf("1");
		}
		else if(n==2)
		{
			printf("1\n");
				printf("1 1");
		}
		else
		{
				printf("2\n");
				for(i=2;i<n+2;i++)
				{
					if(check(i))
					printf("1 ");
					else
					printf("2 ");	
				} 
		}
}
