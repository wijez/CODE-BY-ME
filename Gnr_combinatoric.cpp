#include<bits/stdc++.h>
#define S (int)1e3
using namespace std;
int n , k , ok ; 
int a[105] ;
void Create(){
  for(int i = 1 ; i <= k ; i++){
    a[i] = i ;
  }
}
void Grn_Cbn(){
  int i = k ; 
  while(i >= 1 && a[i] == n - k + i ){
    --i ; 
  }
  if(i == 0){
    ok = 0 ;
  }
  else{
    a[i] ++ ; 
    for(int j = i + 1 ; j <= k ; j++){
      a[j] = a[j-1] ;
    }
  }
}
void solve(){
    cin >> n >> k ; 
    Create() ; 
    ok =1 ;
    while(ok){
      for(int i = 1 ; i <= k ; i++){
        cout << a[i] ;
    }
    cout << endl ; 
    Grn_Cbn() ;
    }
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0) ; 
  int t = 1 ;
  while(t--){
    solve() ;
  }
  return 0 ;
}