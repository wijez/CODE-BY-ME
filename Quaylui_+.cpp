#include<bits/stdc++.h>
using namespace std ;
 int n , k , x[100] ; 
 void IN(){
  for(int i = 1 ; i <=  k ; i++){
    cout << x[i] ;
  }
  cout << endl;
}
 void Try(int i){
  for(int j = x[i-1] + 1 ; j <= n - k + i ; j++){
    x[i] = j ;
    if(i == k){
      IN() ;
    }
    else{
      Try(i+1) ;
    }
  }
 }
 void Solution(){
  cin  >> n >> k ;
  Try(1) ;
}
int main(){
  // ios_base::sync_with_stdio(0);
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  Solution();
  
  return 0 ;
}