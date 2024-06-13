#include<bits/stdc++.h>
using namespace std;
int n , a[105] , ok ;
void Create(){
  for(int i = 1 ; i <= n ; i++){
    a[i] = i ;
  }
}
void sinh(){
  int i =  n - 1 ;
  while(i >= 1 && a[i] > a[i+1]){
    --i ;
  }
  if(i == 0){
    ok = 0 ;
  }
  else{
    int j = n; 
    while(a[i] > a[j]){
      j-- ; 
    }
      swap(a[i], a[j]) ;
  
  }

}
int main(){
  cin >> n ;
  
  Create() ; 
  ok  = 1  ;
  while(ok){
    for(int i = 1 ; i <= n ; i++){
      cout << a[i] ;
    }
    cout <<"\n" ;
    sinh() ;
  }
  return 0 ;
}