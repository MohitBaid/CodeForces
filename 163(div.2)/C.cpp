#include<iostream>
#include<vector>
#include<map>
//#include<pair>
using namespace std;

int main()
{
	int n,i,j;
	cin >>n;
	vector < pair < int , int > > v;
	vector < int > row;
	vector < int > col;
	row.resize(n+1);
	col.resize(n+1);
	for(i=1;i<=n;i++)
	{
		row[i]=0;
		col[i]=0;
	}
	for(i=0;i<n-1;i++)
	{
		int x,y;
		cin>>x>>y;
		v.push_back(make_pair(x,y));
		row[x]++;
		col[y]++;
	}
	int empty_row=0;
	for(i=1;i<=n;i++)
	{
		if(row[i] == 0)
		{
			empty_row = i;
			break;
		}
	}

	cout<<empty_row<<endl;

	vector < pair < int , pair < int , int > > > moves;
	int f = 2;
	for(i=0;i<v.size();i++)
	{
		pair < int , int > pr = v[i];
		int x = pr.first;
		int y = pr.second;

		//swap x , emty_row
		//swap y , f;

		cout<<x<<" "<<y<<" "<<empty_row<<" "<<f<<endl;
		if(x!=empty_row)
		{
			cout<<"swapping "<<x<<" "<<empty_row<<endl;
			moves.push_back(make_pair(1,make_pair(x,empty_row)));
		}
		if(y!=f)
		{			
			moves.push_back(make_pair(2,make_pair(y,f)));
			cout<<"swapping "<<y<<" "<<f<<endl;
		}
		for(j =0;j<v.size();j++)
		{
			pair <int,int > pr2 = v[j];
			if(i!=j)
			{
				if(pr2.first == x)
					pr2.first = empty_row;
				if(pr2.second == y)
					pr.second = f;
				v[j] = pr2;		
			}
		}
		f++;
	}
	if(empty_row != 1)
			moves.push_back(make_pair(1,make_pair(1,empty_row)));
	cout<<moves.size()<<endl;
	for(i=0;i<moves.size();i++)
	{
		cout<<moves[i].first<<" "<<moves[i].second.first<<" "<<moves[i].second.second<<endl;
	}
}