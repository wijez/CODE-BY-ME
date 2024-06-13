#include<bits/stdc++.h>
using namespace std;
int n , x[100] , used[100] ; 
void IN(){
  for(int i = 1 ; i <= n ; i++){
    cout << x[i] ;
  }
  cout << endl;
}
void Try(int i){
  for(int j = 1 ; j <= n ; j ++){
    if ( used[j] == 0 ){
       x[i] = j ;
       used[j] = 1 ; // danh dau
    if( i == n){
      IN() ;
    }
    else{
      // return 
      
       Try(i+ 1) ;
       
    }
    used[j] = 0 ;
    }
  }

}
void Solution(){
  cin >> n ;
  Try(1) ;
}
int main(){
  Solution() ;
  memset(used , 0 , sizeof(used));
  return 0 ;
}