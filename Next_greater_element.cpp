#include <bits/stdc++.h>
#define N (int)1e6
#define L long long
using namespace std;
/*  giải thích :  b1 : khi stack rỗng chúng ta đẩy vị trí của phần tử thứ i vào trong stack
                  b2 : kiểm tra xem stack có không rỗng và a[st.top()] < a[i] tức là vị trí
                    st.top() = 0 a[0] có bé hơn a[1] hay không
                    nếu bé hơn chúng ta bắt đầu gán b[st.top()] = a[i] tức là đã lấy được
                    phần tử lớn hơn đứng sau a[st.top()] sau đó chúng ta xóa đỉnh hiện tại 
                    tiếp tục đẩy vị trí thứ i tức vị trí hiện tại vào trong bộ nhớ stack 
                    lặp lại cho đến khi đến vị trí thứ n - 1 
                  b3 : trường hợp stack vẫn còn phần tử nhưng đã xét hết mảng thực hiện
                      cho tất cả các phần tử còn lại = -1 bởi vì không có số nào đứng sau
                      mà lớn hơn a[st.top()] sau đó xóa chúng*/
void solve()
{
  int n;
  cin >> n;
  int a[n], b[n];
  for (int &x : a)
    cin >> x;
  stack<int> st;
  for (int i = 0; i < n; i++)
  {
    if (st.empty())
    {
      st.push(i);
    }
    else
    {
      while (!st.empty() && a[st.top()] < a[i])
      {
        b[st.top()] = a[i];
        st.pop() ;
      }
      st.push(i);
    }
    
  }
  while(!st.empty()){
      b[st.top()] = -1 ;
      st.pop() ;
    }
  for(int x : b) cout << x << " " ;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t = 1 ;
  while (t--)
  {
    solve();
  }
  return 0;
}