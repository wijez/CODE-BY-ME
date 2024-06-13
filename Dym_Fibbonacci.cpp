#include<bits/stdc++.h>
using namespace std;
int Dym_Fib(int n){
  int  dp[n + 1] ;
  memset(dp, 0, sizeof(dp)) ; 
  dp[1] = 1 ;
  // 0 1 = 1 1 2 = 3 , 2 3 = 5 , 3 4 = 7 
  for( int i = 2 ; i <= n + 1 ;i++){
    dp[i] = dp[i-1] + dp[i-2] ; 
  }
  return dp[n] ;
}
void solve(){
    int  n ;
    cin >> n ;
    cout << Dym_Fib(n) ;
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