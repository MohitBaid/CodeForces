#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j;	//scanf("%d",&n);
	int A[n];
	char x[1000];
	char y[1000];
	char z[1000];
	scanf("%s",x);
	scanf("%s",y);
	int flag=1;
	for(i=0;x[i]!='\0';i++)
	{
		int d1=(int)x[i];
		int d2=(int)y[i];
		if(d2>d1)
		{
			flag=0;
			printf("-1\n");
			break;
		}
		else
		{
			if(d1==d2)
				z[i]='z';
			else
				z[i]=(char)d2;				
		}
	}
	z[i]='\0';
	if(flag)
		printf("%s",z);
	
}
