#include<stdio.h>
#include<stdlib.h>
#define MAX 100
struct node
{
	int k;
	struct node*next;
};
struct edge
{
	int s;
	int e;
};

int deg[MAX];
int st[MAX];
struct node* head[MAX];
int queue[MAX];
int front=-1,rear=-1,ans=0;

void enqueue(int k)
{
	if(front==-1) 
        front = 0;
    rear=(rear+1)%MAX;
    queue[rear]=k;
}
void dequeue()
{
	front=(front+1)%MAX;
}
int isempty()
{
	if(front == -1 || front > rear)
        return 1;
    else
        return 0;
}
void* insert_end(struct node* p,int X)
{
	struct node* q=(struct node*)malloc(sizeof(struct node*));
	q->next=NULL;
	while(p->next!=NULL)
		p=p->next;
	p->next=q;
	q->k=X;
}
int BFS(int i)
{   
    enqueue(i);
    st[i-1]++;
    struct node* temp=head[i-1];
    while(!isempty())
    {
        int v=queue[front];
		int k=deg[v-1];
		struct node* temp=head[v-1];			
        for(i=0; i<k; i++)
        {
           	
			temp=temp->next;
           	int m=temp->k;		m--;
		    if(st[m]==-1) 
            {
                enqueue(m+1);
                ans++;
                st[m]++;			
            }
            else if(st[m]==1)
            {
        		ans++;
				return 1;	
            }	
        }
        dequeue();
        st[v-1]++;
    }
}
int create()
{
	int v,u,i,e,s,d;
	scanf("%d",&v);
	for(i=0;i<v;i++)
	{
		head[i]=(struct node*)malloc(sizeof(struct node));
		head[i]->k=i+1;
		head[i]->next=NULL;
		st[i]=-1;
	}	 
	e=v;
	for(s=1;s<=v;s++)
	{
		scanf("%d",&d);
		deg[s-1]++;
		insert_end(head[s-1],d);
	}
	return v;
}
int main()
{
	int v=create();
	int max=0,i;
	for(i=0;i<v;i++)	
	{	
		int t=BFS(i+1);
		if(t)
		{
			if(ans>max)
				max=ans;
		}
		ans=0;
	}		
	if(max==0)	printf("-1");
	else if(max==2)	printf("%d",max-1);
	else		printf("%d",ans);
}
