#include <bits/stdc++.h>
# define INF 0x3f3f3f3f 
// Tìm đường đi một đỉnh đến tất cả các đỉnh trong đồ thị
// ▪ Sử dụng danh sách kề để thực thi
// ▪ Sử dụng priority_queue trong ST

using namespace std;

typedef pair<int, int> iPair;

class Graph {
	int V;
	list< pair<int, int> > *adj;
	
	public:
		Graph(int V);
		void addEdge(int u, int v, int w);
		void shortestPath(int s);
};

Graph::Graph(int V){
	this->V = V;
	adj = new list<iPair> [V];
}
// them canh 
void Graph::addEdge(int u, int v, int w) { 
    adj[u].push_back(make_pair(v, w)); 
    adj[v].push_back(make_pair(u, w)); 
} 
void Graph::shortestPath(int s){
	priority_queue< iPair, vector <iPair>, greater<iPair> > pq;
	vector<int> dist (V, INF);
	pq.push(make_pair(0, s));
	dist[s] = 0;
	
	while(!pq.empty()){
		int u = pq.top().second; 
        pq.pop(); 
		
		list< pair<int, int> > :: iterator it;
		for(it = adj[u].begin(); it != adj[u].end(); it++){
			int v = (*it).first;
			int weight = (*it).second;
			
			if(dist[v] > dist[u] + weight){
				dist[v] = dist[u] + weight;
				pq.push(make_pair(dist[v], v));
			}
		}
	}
	for(int i = 0 ; i < V; i++){
		cout << i << "->" << dist[i] << endl;
	}
}

int main(){
	int V = 9; 
    Graph g(V); 
    
	g.addEdge(0, 1, 4); 
    g.addEdge(0, 7, 8); 
    g.addEdge(1, 2, 8); 
    g.addEdge(1, 7, 11); 
    g.addEdge(2, 3, 7); 
    g.addEdge(2, 8, 2); 
    g.addEdge(2, 5, 4); 
    g.addEdge(3, 4, 9); 
    g.addEdge(3, 5, 14); 
    g.addEdge(4, 5, 10); 
    g.addEdge(5, 6, 2); 
    g.addEdge(6, 7, 1); 
    g.addEdge(6, 8, 6); 
    g.addEdge(7, 8, 7); 
    g.shortestPath(0);
	return 0;
}