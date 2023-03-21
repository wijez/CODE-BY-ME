// Hệ số tổng của số nguyên tố 
#include<iostream>
#include<math.h>
using namespace std ;
int solve(int n){
  int k = 2 , sum = 0 ;
  while(n > 1){
    while(n % k == 0){
      sum += k ;
      n /= k ;
    }
    k++ ;
  }
  return sum ;
}
int Factorsum(int n ){
  while(n != solve(n)){
    n = solve(n) ;
  }
  return n ;
}
void xuat(int n , int a[]){
  for(int i = 0 ; i < n ; i++){
    cout << Factorsum(a[i]) << " " ;
  }
}
int main(){
  int n ;
  cin >> n ; 
  int a[n] ;
  for(int i = 0 ; i < n ; i++){
    cin >> a[i] ;
  }
  xuat(n,a) ;
  return 0 ;

}