#include<bits/stdc++.h>
using namespace std;
void solve(){
  int n , k ; 
  cin >> n >> k ; 
  int x = 0 ;
  // số nguyên dương liên tiếp + lại <= k bắt đầu từ 1
  while( (x + 1 ) * ( x + 2) / 2 <= k){
    x++ ;
  }
  for(int i = 0; i < n ; i++){
        if( i < x){
          cout << 2 << " " ;
        }
        else if( x == i){
          // để cho ra 1 số lẻ luôn luôn âm
          cout << -2 * x - 1 + 2 * (  k - x * ( x + 1) / 2) << " " ;
        }
        else cout << -1000 << " " ;
  }
  cout << "\n" ;
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0) ;
  int t ;
  cin >> t ;
  while(t--){
    solve() ;
  }
}