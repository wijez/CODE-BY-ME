#include <bits/stdc++.h>
using namespace std;
bool _rec_Palindrome(const string &s , int  l , int r){
  if(l >= r) return true;
  if(s[l] != s[r]) return false;
  return _rec_Palindrome(s, l + 1, r - 1);
}
// bool _Palindrome(const string &s){
//   int _length = s.length() - 1 ;
//   for(int i = 0; i <= s.length() / 2 ; i++){
//     if(s[i] != s[_length]) return false ; 
//     _length -- ;
//   }
//   return true ;
// }
int solve()
{
  string s ; 
  cin >> s ;
  if(_rec_Palindrome(s,0,s.length()-1)){
    cout << "it's palindrome" ;
  }
  else cout << "it's not palindrome" ;
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