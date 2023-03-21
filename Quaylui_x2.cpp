#include<bits/stdc++.h>

using namespace std;
int  n ,  x[100] ; 
void IN(){
  for(int i = 1 ; i <=  n ; i++){
    cout << x[i] ;
  }
  cout << endl;
}
void Try(int i){
  for(int j = 0 ; j <= 1 ; j ++){
    x[i] = j ;
    if( i == n){
      IN() ;
    }
    else{
      // return 
       Try(i+ 1) ;
    }
  }

}
void Solution(){
  cin >> n ;
  Try(1) ;
}
int main(){
  Solution() ;
//  Solution1() ;
  return 0 ;
}