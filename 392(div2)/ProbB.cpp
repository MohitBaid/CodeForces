#include<stdio.h>

int main()
{
	char ch[110];
	int i,j,k=0,p=-1;
	scanf("%s",ch);
	int A[4]={0,0,0,0};
	for(j=0;j<4;j++)
	{
		for(i=j;ch[i]!='\0';i=i+4)
		{
			if(ch[i]=='!')
				k++;
			if(ch[i]=='R')
				p=0;
			if(ch[i]=='B')
				p=1;	
			if(ch[i]=='Y')
				p=2;	
			if(ch[i]=='G')
				p=3;
		}
		//printf("%d--",k);
		A[p]=k;	k=0;	p=-1;
	}						
	for(i=0;i<4;i++)
		printf("%d ",A[i]);
}
