#include<stdio.h>
#include<string.h>
int main()
{
		char ch1[20],ch2[20],s1[20],s2[20],temp[20];
		scanf("%s %s",ch1,ch2);
		int n,i;	scanf("%d",&n);
		int A[n];
		printf("%s %s\n",ch1,ch2);
		for(i=0;i<n;i++)
		{
				scanf("%s %s",s1,s2);
				if(strcmp(ch1,s1)==0)
				{
					printf("%s %s\n",s2,ch2);	
					strcpy(ch1,s2);
				}
				else if(strcmp(ch1,s2)==0)
				{
					printf("%s %s\n",s1,ch2);	
					strcpy(ch1,s1);
				}
				else if(strcmp(ch2,s2)==0)
				{
					printf("%s %s\n",s1,ch1);	
					strcpy(ch2,s1);
				}
				else if(strcmp(ch2,s1)==0)
				{
					printf("%s %s\n",s2,ch1);	
					strcpy(ch2,s2);
				}
				
		}
}
