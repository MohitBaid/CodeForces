#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
struct var
{
		string name;
		string str;
};
int main()
{
		int n,m,i;		scanf("%d %d",&n,&m);
		struct var v[n];
		long long int val=pow(2,m)-1,s=0;
		const int r=m;
		std::string max = std::bitset<1000>(val).to_string();
  		//std::cout<<max<<"\n";
		val=0;
		std::string min = std::bitset<1000>(val).to_string();
  		//std::cout<<min<<"\n";
		char temp1[1000];
		char temp2[10002];
		for(i=0;i<2;i++)
		{
				scanf("%s := %s",temp1,temp2);
				v[i].name=(string)temp1;
				v[i].str=(string)temp2;				
				if(v[i].str==max)
				{
						unsigned long dec = std::bitset<1000>(max).to_ulong();
   						std::cout<<dec<<"\n";
   						dec--;
   						max=std::bitset<1000>(dec).to_string();
				}
				else if(v[i].str==min)
				{
						unsigned long dec = std::bitset<1000>(min).to_ulong();
   						std::cout<<dec<<"\n";
   						dec++;
   						min=std::bitset<1000>(dec).to_string();
				}
		}
		unsigned long dec1 = std::bitset<1000>(min).to_ulong();
      	unsigned long dec2 = std::bitset<1000>(v[1].str).to_ulong();				
		dec1=dec1^dec2;
		min=std::bitset<1000>(dec1).to_string();
		int l=min.length();
		for(i=l-m;i<l;i++)
			cout<<min[i];
		cout<<endl;	
		dec1 = std::bitset<1000>(max).to_ulong();
    	dec2 = std::bitset<1000>(v[1].str).to_ulong();				
		dec1=dec1^dec2;
		max=std::bitset<1000>(dec1).to_string();
		l=max.length();
		for(i=l-m;i<l;i++)
			cout<<max[i];		
		cout<<endl;	
}
