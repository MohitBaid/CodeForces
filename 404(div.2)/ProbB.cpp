#include<stdio.h>
#include<stdlib.h>
struct time
{
	int l;
	int r;	
};
int cmpfunc1(const void *p, const void *q) 
{
    int l = ((struct	time *)p)->l;
    int r = ((struct time *)q)->l; 
    if(l>r)
    	return 1;
    else if(l<r)
		return -1;
	else
		return 0;		
}
int cmpfunc2(const void *p, const void *q) 
{
    int l = ((struct time *)p)->r;
    int r = ((struct time *)q)->r; 
    if(l>r)
    	return -1;
    else if(l<r)
		return 1;
	else
		return 0;		
}
int main()
{
		int n,m,i,j;	scanf("%d",&n);
		struct time c[n];
		for(i=0;i<n;i++)
		{
				scanf("%d %d",&c[i].l,&c[i].r);
		}		
		scanf("%d",&m);
		struct time p[m];
		for(i=0;i<m;i++)
		{
				scanf("%d %d",&p[i].l,&p[i].r);
		}
		
		qsort(c,n,sizeof(struct time),cmpfunc2);
		qsort(p,m,sizeof(struct time),cmpfunc1);
		for(i=0;i<n;i++)
		{
				printf("%d %d\n",c[i].l,c[i].r);
		}
		printf("\n\n\n");		
		for(i=0;i<m;i++)
		{
				printf("%d %d\n",p[i].l,p[i].r);
		}
		int ans=0;
		int t;
		i=0;
		j=0;
		do
		{
			printf("comparing   %d %d   and %d %d \n",c[i].l,c[i].r,p[j].l,p[j].r);
			if(c[i].r<=p[j].l )	
			{
					t=p[j].l-c[i].r;
			}
			else if(c[i].l >= p[j].r)
			{
					t=c[i].l-p[j].r;
			}
			else
			{
				t=0;
			}
			if(c[i].r>p[j].l && c[i].l<p[j].l)
			{
				if(i<n)	
					i++;
				else
					j++;
			}
			else
			{
				if(j<m) 
					j++;
				else
					i++;	
			}
			printf("----%d-----\n",t);
			if(t>ans)
					ans=t;	
		}while(i+j<=(n+m-2));
		printf("%d\n",ans);
}
