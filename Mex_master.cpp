#include <bits/stdc++.h>
#define N (int) 1e6
using namespace std;
int pre[N] ;
void solve()
{
  int n ; 
  cin >> n ;
  vector<int> v(n) ; 
  for(int &x : v) cin >> x ;
  sort(v.begin(), v.end()) ;
   int x = 1 ;
  for(int i = 1 ; i <= n ; i++){
   
    if(  v[i] & 1 && v[i-1] & 0 || v[i] & 0 && v[i-1] & 0 || v[i] & 0 && v[i-1] & 1){
      
      pre[i] =  pre[i-1]  + x;
    }
  }
  cout << ((pre[n] & 1) ? 1 : 0 ) ;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}