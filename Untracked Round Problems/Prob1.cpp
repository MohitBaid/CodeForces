#include<stdio.h>
int  main()
{
	int n,i,flg=0;	scanf("%d",&n);
	char ch[n][5];
	for(i=0;i<n;i++)
	{
		scanf("%s",ch[i]);
		if(ch[i][0]=='O'&&ch[i][1]=='O')
		{	
			if(flg!=1)	
			{
				ch[i][0]='+';ch[i][1]='+';
				flg=1;
			}		
		}
		else if(ch[i][3]=='O'&&ch[i][4]=='O')
		{
			if(flg!=1)
			{
				flg=1;
				ch[i][3]='+';ch[i][4]='+';
			}	
		}
	}
	int j;
	if(flg==1)
	{
			printf("YES\n");
			for(i=0;i<n;i++)
			{
				for(j=0;j<5;j++)				
					printf("%c",ch[i][j]);
				printf("\n");
			}		
	}
	else
			printf("NO\n");			
	return 0;
	}
	
