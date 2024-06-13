#include<bits/stdc++.h>
using namespace std;
int n , m ; 
vector<int> adj[1001] ;
bool visited[1001] ; 
void create(){
  cin >> n >> m  ;
  for(int i=1; i<= m ; i++){
    int x , y ; cin >> x >> y ;
    adj[x].push_back(y) ; 
    adj[y].push_back(x) ; 
  } 
}
void  DFS(int u){
  cout << u << " " ;
  visited[u] = true ; 
  for(int x : adj[u]){
    if(!visited[x]){
      DFS(x) ;
    }
  }
}
void BFS(int u){
  queue<int> q  ; 
  q.push(u) ;
  visited[u] = true ;
  while(!q.empty()){
   int v = q.front() ;  q.pop() ;
    cout << v << " " ;
    for(int x : adj[v]){
      if(!visited[x]){
        q.push(x) ;
        visited[x] = true ;
      }
    }
  }
}
void Component(){
  int ans = 0 ;
   memset( visited, false , sizeof(visited) );
  for(int i = 1 ; i <= n ; i++){
    if(!visited[i]){
      ++ans ; 
      cout << "thanh phan lien thong : " << ans << endl;
     // DFS(i) ;
      BFS(i) ;
      cout << endl ;
    }
}
cout << ans << endl; 
}
int main(){
  create() ; 
 // DFS(1) ;
 BFS(1) ;
  Component() ;
  return 0 ;
}