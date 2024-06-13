#include<bits/stdc++.h>
using namespace std;

int n , k, a[100] , ok  ; 
void Create(){
  for(int i = 1 ; i <= n ; i++){
    a[i] = 0 ;
  }
}
void Sinh(){
  int i = n ;
  
    while(i >= 1 && a[i] == 1){
      a[i] = 0; 
      --i ;
    }
    if(i== 0){
      ok = 0 ;
    }
    else{
      a[i] = 1 ;
    }

}
// kiem tra sau nhi phan co bit == 1 
bool check(){
  int cnt = 0 ;
  for(int i = 1 ; i <= n ; i++){
    cnt += a[i] ;
}
return cnt == k ; 
}
void Solution(){
  cin >> n  ;
  ok = 1 ;
  int count = 0 ;
  Create() ;
  while(ok){
  //  if(check()){ // loai bo check  va k co the tao sinh chuoi bit co n gia tri 
 
         for(int i = 1 ; i <= n ; i++){
        cout << a[i]  ;
        }
         cout << endl ;
  //  }
      Sinh() ;
      count++ ;
 }
 cout << count << endl ;
}
int main()
{
    Solution() ;
    return 0;
}
