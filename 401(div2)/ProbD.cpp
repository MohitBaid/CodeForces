#include<stdio.h>
#include<bits/stdc++.h>
bool isSubSequence(char str1[], char str2[], int m, int n)
{
    if (m == 0) return true;
    if (n == 0) return false;
    if (str1[m-1] == str2[n-1])
        return isSubSequence(str1, str2, m-1, n-1);
    return isSubSequence(str1, str2, m, n-1);
}
int main()
{
		char ch1[200002];	scanf("%s",ch1);	
		char ch2[200002];	scanf("%s",ch2);
		int n,i,m;
		for(n=0;ch1[n]!='\0';n++);
		for(m=0;ch2[m]!='\0';m++);
		int A[n];
		char ch3[n+3];
		for(i=0;i<n;i++)
		{
				scanf("%d",&A[i]);
				ch3[i]='-';
		}
		//for(i=0;i<n;i++)
		//	printf("%d ",A[i]);
		ch3[i]='\0';
		for(i=n-1;i>=0;i--)
		{
			ch3[A[i]-1]=ch1[A[i]-1];
			//printf("%s    %d\n",ch3,A[i]);
			bool flag=isSubSequence(ch2,ch3,m,n);
			if(flag)
			{
				break;	
			}	
		}
		printf("%d\n",i);
			
}
