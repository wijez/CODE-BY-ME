#include<iostream>
#include<algorithm>

using namespace std;

int fibonacci (int n){
  if( n <= 1) return 1 ;
    return fibonacci (n - 1 )  + fibonacci (n - 2) ;
}
int Mu( int a , int n){
  if( n == 1) return a ;
  return a * Mu(a,n-1) ;
}
int main(){
  int a , n ;
  cin >> a >> n ;
  // fibonacci (n) ;
 cout << fibonacci (n) << endl ;
  cout<< Mu(a,n) ;
  return 0;

}