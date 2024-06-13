#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin >> n;
  int _even = 0 , _odd = 0 ;
  for(int i = 0 ; i < n  ; i++){
        int x ; cin >> x;
        if( x & 1) _odd += x ; 
        else _even += x ;
  }
  cout << ((_even > _odd) ? "YES\n" : "NO\n") ;
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