#include <bits/stdc++.h>
using namespace std;
int solve()
{
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  for (int &x : v)
    cin >> x;

  if ((int)v.size() < k || k < 0)
  {
    return 0;
  }
  int _max = 0, _curr = 0;
  for (int i = 0; i < k; i++)
  {
    _max += v[i];
  }
  _curr = _max;
  for (int i = 0; i < n - k; i++)
  {
    _curr = _curr - v[i] + v[i + k];
    _max = max(_max, _curr);
  }
  cout << _max << endl;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie();
  int t = 1;
  while (t--)
  {
    solve();
  }
  return 0;
}