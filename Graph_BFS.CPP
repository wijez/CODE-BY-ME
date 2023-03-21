
// Depth first search 
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

class Graph {
	int V; // vertices (dinh)
	list<ll> *adj; // danh sach ke
	
	public:
		Graph(ll V);
		void addEdge(ll v, ll w); // edge (canh)
		void BFS(ll s);
};
Graph::Graph(ll V){
	this->V = V;
	adj = new list<ll>[V];
}
void Graph::addEdge(ll v, ll w){
	adj[v].push_back(w); // canh co huong
}
void Graph::BFS(ll s){
	bool *visited = new bool[V];
	memset(visited, false, sizeof(visited));
	
	list<ll> queue;
	list<ll> :: iterator it;
	visited[s] = true;
	queue.push_back(s);
	
	while(!queue.empty()){
		s = queue.front();
		cout << s << " ";
		queue.pop_front();
		
		for(it = adj[s].begin(); it != adj[s].end(); it++){
			if(!visited[*it]){
				visited[*it] = true;
				queue.push_back(*it);
			}
		}
	}
	
}


int main(){
	Graph g(4); 
	g.addEdge(0, 1); 
    g.addEdge(0, 2); 
    g.addEdge(1, 2); 
    g.addEdge(2, 0); 
    g.addEdge(2, 3); 
    g.addEdge(3, 3); 
  	g.BFS(2); 
	return 0;
}