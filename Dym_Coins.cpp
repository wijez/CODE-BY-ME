#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, x;
  cin >> n >> x;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  int dp[x + 1];
  dp[0] = 0;

  for (int i = 1; i <= x; i++)
  {
    dp[i] = INT_MAX;
    for (int j = 0; j < n; j++)
    {
      if (i - a[j] >= 0 && dp[i - a[j]] != INT_MAX) 
      {
        dp[i] = min(dp[i], dp[i - a[j]] + 1);
      }
    }
  }
  for(int x : dp)cout << x << " " ;

  if (dp[x] == INT_MAX)
  {
    cout << "-1" << endl;
  }
  else
  {
    cout << dp[x] << endl;
  }
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