#include<stdio.h>
int main()
{
	int n,i,j,k;		scanf("%d",&n);
	char ch[n+5],sol[n+5];	scanf("%s",ch);
	for(j=0;ch[j]!='\0';j++);
	int j2=j;
	int a=0;
	if(j%2)
	{
			j=j/2;
		sol[j]=ch[0];	
		for(k=1;k<j2;)
		{
			a++;
			if(j-a>=0)
				sol[j-a]=ch[k++];
			if(j+a<j2)	
				sol[j+a]=ch[k++];
		}
		sol[k]='\0';
		printf("%s",sol);
	}
	else
	{
			j=j/2-1;		
			sol[j]=ch[0];
			for(k=1;k<j2;)
		{
			a++;
			if(j+a<j2)	
				sol[j+a]=ch[k++];
			if(j-a>=0)
				sol[j-a]=ch[k++];
		}
		sol[k]='\0';
		printf("%s",sol);

	}				
}
