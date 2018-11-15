#include<stdio.h>
#include<stdlib.h>
struct no
{
	int x;
	int p;
};
static int cmp(const void *p1, const void *p2)
{
        int y1 = ((const struct no*)p1)->x;
        int y2 = ((const struct no*)p2)->x;
        if (y1 < y2)
            return -1;
        else if (y1 > y2)
            return 1;
         else 	return 0;   
}
int main()
{
	int n,m,i;	scanf("%d %d",&n,&m);
	struct no A[n];
	int e=0,o=0;
	int ea=m/2;
	int oa=m/2+m%2;
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i].x);
		if(A[i].x%2==0)
			e++;
		else
			o++;
		A[i].p=i;		
	}
	qsort(A,n,sizeof(struct no),cmp);
	if(n%2)
		printf("-1");
	else
	{	
		if(e==o)
		{
			printf("0\n");
			for(i=0;i<n;i++)
				printf("%d ",A[i]);
		}
		if(e>o)
		{
			int d=(e-o)/2;
			int t=1;
			if(oa<d)
				printf("-1");
			else
			{
				printf("%d\n",d);
				for(i=0;i<n;i++)
				{
					if(d>0)
					{
						if(A[i]%2==0)
						{
							printf("%d ",t);
							t=t+2;
							d--;
						}
						else
						{
							printf("%d ",A[i]);
						}		
					}
					else
					{
						printf("%d ",A[i]);
					}
				}
			}	
		}
		else
		{
			int d=(o-e)/2;
			int t=2;
			if(ea<d)
				printf("-1");
			else
			{
				printf("%d\n",d);
				for(i=0;i<n;i++)
				{
					if(d>0)
					{
						if(A[i]%2!=0)
						{
							printf("%d ",t);
							t=t+2;
							d--;
						}
						else
						{
							printf("%d ",A[i]);
						}		
					}
					else
					{
						printf("%d ",A[i]);
					}
				}
			}
		}
	}
		
}
