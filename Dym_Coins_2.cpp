#include <bits/stdc++.h>
#define ll long long int
const long long base = 1e9 + 7 ;
using namespace std;
void solve()
{
  ll n, x;
  cin >> n >> x;
  ll a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
   if( n == 1 && a[0] == 1){
    cout << 1 ;
    return ;
   }

  ll dp[x+1];
  memset(dp, 0, sizeof(dp));
  dp[0] = 1;
 
  for (int i = 0; i < n; i++)
  {
    for (int j = a[i]; j <= x; j++)
    {
      dp[j] += (dp[j - a[i]]) ;
    }
  }
  for(int i = 0; i <= x ; i++){
    cout << dp[i] << " " ; 
  }

 // cout << dp[x] << endl;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  while (t--)
  {
    solve();
  }

  return 0;
}