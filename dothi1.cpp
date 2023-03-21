#include<bits/stdc++.h>
using namespace std ;
int n , m ;
vector<int> v[1004] ;
int main(){
  cin >> n >> m ;
  for(int i = 1 ; i <= m ; i++){
    int s, e ;
    cin >> s >> e ;
    v[s].push_back(e) ;
    v[e].push_back(s) ;
  }
  for(int i = 1 ; i <= n ; i++){
    cout << i <<": " ;
    for(int j = 0 ; j < v[i].size() ; j++){
      cout << v[i][j] <<" "; 
    }
    cout << endl ;
  }
  return 0 ;
}