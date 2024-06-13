#include <iostream>
using namespace std;

void printResult(int x[], int n)
{
  cout << n << " = ";
  for (int i = 1; i < n; i++)
  {
    cout << x[i] << " + ";
  }
  cout << x[n] << endl;
}

void Try(int i, int x[], int t[], int n)
{
  // // thử tất cả các giá trị có thể có của x[i]
  for (int V = x[i - 1]; V <= (n - t[i - 1]) / 2; V++)
  {
    // gán V cho x[i]
    x[i] = V;
    // cập nhật t[i]
    t[i] = t[i - 1] + V;
    // gọi đệ quy để chọn x[i+1] 
    Try(i + 1, x, t, n);
    // phục hồi t[i]
    t[i] = t[i - 1];
  }
  // gán giá trị còn lại cho x[i]
  x[i] = n - t[i - 1];
  // prints the result
  printResult(x, i);
}

int main()
{
  // declares an array to store the decomposition
  int x[31];
  // declares an array to store the partial sums
  int t[31];
  // declares a variable to store the input number
  int n;
  // initializes x[0] and t[0]
  x[0] = 1;
  t[0] = 0;
  // prompts and reads n from user input
  cout << "Enter n: ";
  cin >> n;
  // calls Try function with i = 1
  Try(1, x, t, n);
  return 0;
}