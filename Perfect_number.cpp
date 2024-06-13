#include <bits/stdc++.h>
using namespace std;
bool Perfect(int n)
{
  int sum = 0;
  for (int i = 1; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      if (i != n / i)
        sum += i + (n / i);
      else
        sum += i;
    }
  }
  return ((sum - n == n) ? 1 : 0);
}
void solve()
{
  // freopen("OUT.in", "r", stdin);
  // freopen("INT.out", "w", stdout);
  int n;
  cin >> n;
  if (Perfect(n))
  {
    cout << "True" << endl;
  }
  else
    cout << "False" << endl;
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