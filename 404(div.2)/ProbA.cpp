#include<stdio.h>
#include<string.h>
int main()
{
		int n;	scanf("%d",&n);
		char ch[50];
		int ans=0;
		while(n--)
		{
				scanf("%s",ch);
				if(strcmp(ch,"Tetrahedron")==0)
						ans+=4;
				else if(strcmp(ch,"Cube")==0)
						ans+=6;
				else if(strcmp(ch,"Octahedron")==0)
						ans+=8;
				else if(strcmp(ch,"Dodecahedron")==0)
						ans+=12;
				else	ans+=20;									
		}
		printf("%d\n",ans);
}
