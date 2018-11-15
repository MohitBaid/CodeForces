#include<bits/stdc++.h>
using namespace std;
long long int A[1000][1000];
long long int C[2][5];
int main()
{
	long long int n,i,j,k;	cin>>n;
	long long int B[1000][5];
	set < pair < long long int ,pair < int,int>  > > s;
	set < pair < long long int ,pair < int,int>  > > :: iterator it;
	for(i=0;i<n;i++)
	{
		cin>>B[i][0]>>B[i][1]>>B[i][2]>>B[i][3]>>B[i][4];
	}	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			A[i][j]=0;
			A[i][j]+=(B[i][0]*B[j][0]);
			A[i][j]+=(B[i][1]*B[j][1]);
			A[i][j]+=(B[i][2]*B[j][2]);
			A[i][j]+=(B[i][3]*B[j][3]);
			A[i][j]+=(B[i][4]*B[j][4]);
		}
	}
	/*cout<<endl<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl<<endl;*/
	for(i=0;i<n;i++)
	{
		for(j=0;j<n && j!=i;j++)
		{
			long long int temp=1LL*(B[j][0]-B[i][0])*(B[j][0]-B[i][0]);
						 temp+=1LL*(B[j][1]-B[i][1])*(B[j][1]-B[i][1]);
						 temp+=1LL*(B[j][2]-B[i][2])*(B[j][2]-B[i][2]);
						 temp+=1LL*(B[j][3]-B[i][3])*(B[j][3]-B[i][3]);
						 temp+=1LL*(B[j][4]-B[i][4])*(B[j][4]-B[i][4]);	
			s.insert(make_pair(1LL*temp*-1,make_pair(i,j)));
		}
	}
	/*for(it=s.begin();it!=s.end();it++)
	{
		cout<<it->first<<" "<<it->second.first<<" "<<it->second.second<<endl;
	}*/
	set <int > v;
	set <int > ans;
	set <int > :: iterator jt;
	for(it=s.begin();it!=s.end() && v.size()!=n;it++)
	{
		int m1=it->second.first;
		int n1=it->second.second;
		for(i=0;i<n;i++)
		{
			//cout<<i<<" "<<endl;
			if(i==m1||i==n1||v.find(i)!=v.end())		continue;
			else
			{
				/*long long int temp=A[m1][n1];
				temp=A[i][i];
				temp-=A[m1][i];
				temp-=A[n1][i];*/
				for(j=0;j<5;j++)
					C[0][j]=B[m1][j]-B[i][j];
				for(j=0;j<5;j++)
					C[1][j]=B[i][j]-B[n1][j];
				long long int temp=0;
				/*for(j=0;j<5;j++)
					cout<<C[0][j]<<" "<<C[1][j]<<endl;*/
				for(j=0;j<5;j++)
					temp+=1LL*C[1][j]*C[0][j];	
				//cout<<m1<<" "<<n1<<" "<<i<<" "<<A[m1][n1]<<" "<<A[i][i]<<" "<<A[m1][i]<<" "<<A[n1][i]<<" "<<temp<<endl;
				if(temp >= 0)	ans.insert(i);
				v.insert(i);
			}
			if(v.size()==n)
				break;
		}
		//cout<<"sdgdg\n";
	}
	cout<<ans.size()<<endl;
	for(jt=ans.begin();jt!=ans.end();jt++)
		cout<<*jt+1<<" ";
}
