#include <bits/stdc++.h>
using namespace std;
// truyen const khi gia tri khong thay doi trong suot thoi gian chay va dung
// tham chieu bot tao o nho moi 
bool _Check_Prime(const int &n){
    if( n < 2) return false;
    int _sqrt  = sqrt(n);
    for(int i = 2; i <= _sqrt; i++){
      if( n % i == 0) return false;
    }
    return true;

}
void solve()
{
  // freopen("OUT.in", "r", stdin);
  // freopen("INT.out", "w", stdout);
  int n;
  cin >> n;
  if(_Check_Prime(n)){
    cout << "is prime" ;
  }
  else cout << "is not prime" ;
 
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