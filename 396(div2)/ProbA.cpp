#include<stdio.h>
int main()
{
	char ch[100005];
	char ch2[100005];
	int l1,l2,i;
	scanf("%s",ch);
	scanf("%s",ch2);
	int flag=1;
	for(l1=0;ch[l1]!='\0';l1++);
	for(l2=0;ch2[l2]!='\0';l2++);
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]!=ch2[i])
		{
			flag=0;
			break;
		}
	}
	if(flag)
		printf("-1");
	else
	{
		if(l2>l1)
			printf("%d",l2);
		else
			printf("%d",l1);
	}						
}
