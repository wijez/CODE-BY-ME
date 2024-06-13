#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
  int n;
  cin >> n;
  vector<int> v(n);
  // vector<int> dq(5005,0) ;
  for (int &x : v)
    cin >> x;
  sort(v.begin(), v.end());
  if (v[0] != 1)
  {
    cout << "NO\n";
    return;
  }
  ll sum = v[0];
  //  dq[1] = 1 ;
  //!(dq[v[i]])
  for (int i = 1; i < n; i++)
  {
    if (sum < v[i])
    {
      cout << "NO\n";
      return;
    }
    else
      sum += v[i];
    //  for(int  j = 5005 ; j >= v[i] ; j--){
    // dq[j] |= dq[j-v[i]] ;
    //}
  }

  cout << "YES\n";
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