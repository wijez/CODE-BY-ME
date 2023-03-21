#include<bits/stdc++.h>
using namespace std;  
int n ,  m ;
vector<int> adj[1001] ;
bool visited[1001] ;
void Create(){
  cin >> n >> m ;
  for(int i = 1; i <= m ;i++){
    int x , y ; cin >> x >> y ;
    adj[x].push_back(y) ;
   // adj[y].push_back(x) ;
  }
  memset(visited, false , sizeof(visited)) ;
}
void BFS(int u){
  queue<int> q ; 
  visited[u] = true ;
  q.push(u) ;
  while(!q.empty()){
    int v = q.front() ;
    q.pop() ;
    cout << v << " " ;
      for(int x : adj[v]){
        if( !visited[x]){
          q.push(x) ;
        visited[x] = true ;
        }


  }
 
    
  }
}
int main(){
  Create() ;
  BFS(1) ;
  return 0 ;
}