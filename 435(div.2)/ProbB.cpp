#include<bits/stdc++.h>
using namespace std;
// Program to print BFS traversal from a given source vertex. BFS(int s) 
// traverses vertices reachable from s.
//http://www.geeksforgeeks.org/breadth-first-traversal-for-a-graph/
long long int A[1000005];
// This class represents a directed graph using adjacency list representation
class Graph
{
    int V;    // No. of vertices
    list<int> *adj;    // Pointer to an array containing adjacency lists
public:
    Graph(int V);  // Constructor
    void addEdge(int v, int w); // function to add an edge to graph
    void BFS(int s);  // prints BFS traversal from a given source s
};
 
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
 
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
	    adj[w].push_back(v); // Add w to v’s list.
}
 
void Graph::BFS(int s)
{
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for(int i = 0; i < V; i++)
        visited[i] = false;
 
    // Create a queue for BFS
    list<int> queue;
 
    // Mark the current node as visited and enqueue it
    visited[s] = true;
    queue.push_back(s);
 	A[s]=0;
    // 'i' will be used to get all adjacent vertices of a vertex
    list<int>::iterator i;
 
    while(!queue.empty())
    {
        s = queue.front();
        queue.pop_front();
        for(i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            if(!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
                A[*i]=(A[s]+1)%2;
            }
        }
    }
}
 
// Driver program to test methods of graph class
int main()
{
	long long int n,i;	cin>>n;
	for(i=0;i<=n+1;i++)	A[i]=-1;
	set < pair < long long int,long long int > > s;
	set < pair < long long int,long long int > > ::iterator it;
	Graph g(n);
	for(i=0;i<n-1;i++)		
	{
		long long int u,v;
		cin>>u>>v;
		s.insert(make_pair(u,v));
		g.addEdge(u-1,v-1);
	}
	g.BFS(0);
	long long int s1=0,s0=0;
	//for(i=1;i<=n;i++)	cout<<A[i]<<" ";	
	for(i=0;i<n;i++)
	{
		if(A[i]==0)	s0++;
		else		s1++;
	}
	long long int max_edge=s0*s1-(n-1);
	cout<<max(1LL*0,max_edge)<<endl;
}
