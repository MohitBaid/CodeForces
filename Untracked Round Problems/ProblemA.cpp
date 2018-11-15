#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;	scanf("%d %d",&a,&b);
	int n,i;	scanf("%d",&n);
	int A[n][3];
	float T[n];	
	float min=100000000;
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&A[i][0],&A[i][1],&A[i][2]);
		T[i]=(A[i][0]-a)*(A[i][0]-a)+(A[i][1]-b)*(A[i][1]-b);
		T[i]=sqrt(T[i]);
		T[i]=T[i]/A[i][2];
		if(min>T[i])
			min=T[i];
	}
	printf("%f\n",min);
	return 0;		
}
