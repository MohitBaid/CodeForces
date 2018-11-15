#include<stdio.h>
#include<iostream>
#include<string.h>
int main()
{
	int n,i,j,flag=1;	
	scanf("%d",&n);
	int A[n],sol[n];
	char ch[n][1000];
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
		sol[i]=0;
	}
	getchar();
	for(i=0;i<n;i++)
	{
		gets(ch[i]);
		for(j=0;ch[i][j]!='\0';j++)
		{
			if(ch[i][j]=='a'||ch[i][j]== 'e'||ch[i][j]== 'i'||ch[i][j]== 'o'||ch[i][j]== 'u' ||ch[i][j]=='y')
				sol[i]++;
		}
	}
	for(i=0;i<n;i++)
	{
		if(sol[i]!=A[i])
			flag=0;
	}
	if(flag==1)
	{
		printf("YES\n");
	}		
	else
		printf("NO\n");
}
	
