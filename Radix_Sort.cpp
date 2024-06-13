#include <bits/stdc++.h>
#define N (int)1e6
#define L long long
using namespace std;
void print(int *a , int n , char *s){
  cout << "\n" << s << ":" ;
  for(int i = 0 ; i < n ;i++) cout << a[i] << " " ;
  cout << "\n"  ;
}
void Rad_sort(int *a, int n)
{
  int i, at = 1, s[10], t[100], h = 1, max = a[0];
  // tìm số lớn nhất để xác định vòng lặp
  for (i = 1; i < n; i++)
    if (a[i] > max)
      max = a[i];
  // vòng lặp theo các số hàng đơn vị (h = 1) , chuc ( h = 10 ) ...
  while (max / h > 0)
  {
    // toàn mảng cho = 0 , s[i] ứng với các chỉ số 0 - 9
    for (i = 0; i < 10; i++)
      s[i] = 0;
    // mọi chữ số 0 - 9 xuất hiện bao nhiêu lần trong dãy số
    for (i = 0; i < n; i++)
      s[a[i] / h % 10]++;
      print(s,10 , "Mang lan 1: ") ;
    // cộng dồn trên mảng s để xác định vị trí sắp xếp lại cho từng chữ số
    for (i = 1; i < 10; i++)
      s[i] += s[i - 1];
      print(s,10 , "Mang lan 2: ") ;
    if (at == 1)
    {
      // sắp xếp các phần tử  mảng a -> mảng t
      for (i = n - 1; i >= 0; i--)
        t[--s[a[i] / h % 10]] = a[i];
        print(t,n , "arr a : ") ;
    }
    else
    {
      for (i = n - 1; i >= 0; i--)
        a[--s[t[i] / h % 10]] = t[i];
        print(t,n , "arr t : ") ;
    }
    at = -at;
    h *= 10;
  }
  if(at == -1){
    for (i = 1; i < n; i++) a[i] = t[i] ;
    print(a,n , "Cuoi ham copy mang t ve lai a: ") ;
   }
}
void solve()
{
  // a[i] + (-min) + 1
  // sau đó trừ các phần tử của mảng đi (-min) + 1 
  int a[100] = {3, 52, 1, 33, 5353, 3242, 6, 45, 254, 11};
  Rad_sort(a, 10);
  for (int i = 0; i < 10; i++)
  {
    cout << a[i] << endl;
  }
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t = 1;
  while (t--)
  {
    solve();
  }
  return 0;
}