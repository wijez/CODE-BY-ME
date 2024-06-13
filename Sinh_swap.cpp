#include <bits/stdc++.h>
using namespace std;
int n, a[100], ok;
void Create()
{
  // int i = n ;
  for (int i = 1; i <= n; i++)
  {
    a[i] = i;
  }
}
void Sinh()
{
  int i = n - 1;
  while (i >= 1 && a[i] > a[i + 1])
  {
    --i;
  }
  if (i == 0)
  {
    ok = 0;
  }
  else
  {
    int j = n;
    while (a[i] > a[j])
      --j;
    swap(a[i], a[j]);
    //   // co the dung 2 con tro
    //   int left = i + 1 ;
    //   int right = n  ;
    //   while(left < right){
    //     swap(a[left], a[right]) ;
    //     ++left ;
    //     --right ;
    // }
  }
  // // ham lat nguoc
  reverse(a + i + 1, a + n + 1);
}
void Solution()
{

  cin >> n;
  int cnt = 0;

  ok = 1;
  Create();

  while (ok)
  {
    for (int i = 1; i <= n; i++)
    {
      cout << a[i];
    }
    cout << endl;
    Sinh();
    cnt++;
  }
  cout << cnt << endl;
}
int main()
{
  Solution();
  return 0;
}