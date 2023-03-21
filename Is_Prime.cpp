#include<iostream>
#include<math.h>
using namespace std ;
bool isPrime(int n)
{
    if(n < 2 ) return false ;
    for(int i = 2 ; i <= sqrt(n) ; i++){
        if(n % i == 0){
            return false ;
        }
    }
    return true ;
}
void xuat(int n , int a[]){
  for(int i = 0 ; i < n ;i++){
    if(isPrime(a[i]))
    cout << a[i] <<" " ;
  }
}
// số nguyên tố 
int main(){
  int n ;
  cin >> n;
  int a[n] ;
  for(int i = 0 ; i < n ; i++){
    cin >> a[i] ;
  }
  isPrime(n) ;
  xuat(n,a) ;
  return 0 ;
}