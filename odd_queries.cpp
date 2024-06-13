#include <bits/stdc++.h>
#define N (int)1e6
#define L long long 
using namespace std;
L pre[N] ;
void solve()
{
  int n, q;
  cin >> n >> q ;
vector<int> v(n) ;
for(int i = 1 ; i <= n ; i++){
  int x ; cin >> x ;
  pre[i] = pre[i-1] +  x ;
}
  while (q--)
  {
    int l, r, k;
    cin >> l >> r >> k;
    L _res = pre[n] - (pre[r] - pre[l-1]) +  k * ( r - l + 1) ;
    cout << ((_res & 1 ) ? "YES\n" : "NO\n") ;
  }
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