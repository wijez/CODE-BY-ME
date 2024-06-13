#include<bits/stdc++.h>
using namespace std;
 int n , m , s , t;
vector<int> adj[10000] ;
bool visited[10000] ; 
int parent[10000] ;
void Create(){
  cin >>n >> m ;
  for(int i = 1 ; i <= m; ++i){
    int x , y ;
    cin >> x >> y ;
    adj[x].push_back(y) ;
    adj[y].push_back(x) ;
  }
  cin >> s >> t ;
}
void DFS(int u){
  visited[u] = true ; 
  for(int x : adj[u]){
    if(!visited[x]){
      parent[x] = u ;
      DFS(x) ;
    }
  }
}
void BFS(int u){
  queue<int> q ; 
  q.push(u) ;
  visited[u] = true ;
  while(!q.empty()){
    int v = q.front(); q.pop();
    for(int x : adj[v]){
      if(!visited[x]){
        visited[x] = true ;
        q.push(v) ;
        parent[x] = v ;
    }
  }
  }
}
void Path(int s , int t){
  memset(parent, 0, sizeof(parent))  ;
  memset(visited , false , sizeof(visited) ) ;
  DFS(s) ;
  if(!visited[t]){
    cout << "khong co duong di " ;
  }
  else{
    vector<int> path ;
    // truy vet 
    // bat dau tu dinh t ;
    while(t != s){
      path.push_back(t) ;
      t = parent[t] ;
    }
    path.push_back(s) ;
    reverse(path.begin(), path.end()) ;
    for(int x : path){
      cout << x << " "  ;
  }
}
}
// 10 8
// 1 2
// 2 3
// 2 4
// 3 6
// 3 7
// 6 7
// 5 8
// 8 9
int main(){
 
    Create() ;
    
    Path(s,t) ;
  return 0 ;
}