#include<bits/stdc++.h>
using namespace std;
int n , m ;
vector<int> adj[1001] ;
bool visited[1001] ;
void create(){
  cin >> n >> m ;
  int a[10000] ;
  for(int i = 1 ; i <= n ; ++i){
    cin >> a[i] ;
  }
  for(int i=1 ; i <= m; i++){
      int x , y ; 
      cin >> x >> y ;
      adj[x].push_back(y) ;
      // đồ thị vô có hướng loại bỏ
      // adj[y].push_back(x) ;
      adj[y].push_back(x) ;
  }
  memset(visited,false,sizeof(visited)) ; 
}
void DFS(int u){
  cout << u << " " ;
  visited[u] = true ;
  for(int v : adj[u]){
    if(!visited[v]){
      DFS(v) ;
    }
  }
}
int main(){
  create() ;
  DFS(1) ;
  return 0 ;
}