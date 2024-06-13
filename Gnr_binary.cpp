#include <bits/stdc++.h>
using namespace std;
int n, k ,v[101], ok;
void Create()
{
  for (int i = 1; i <= n; i++)
  {
    v[i] = 0;
  }
}
void Grn_Binary()
{
  int i = n;
  while (i >= 1 && v[i] == 1)
  {
    v[i] = 0;
    --i;
  }
  if (i == 0)
  {
    ok = 0;
  }
  else
  {
    v[i] = 1;
  }
}
// bit == 1
bool check()
{
  int cnt = 0;
  for (int i = 1; i <= n; i++)
  {
    cnt += v[i];
  }
  return cnt == k;
}
void solve()
{

  cin >> n;
  Create();
  ok = 1;
  while (ok)
  {
 //   if (check())
  //  {
      for (int i = 1; i <= n; i++)
      {
        cout << v[i];
      }
      cout << endl;
  //  }
    Grn_Binary();
  }
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