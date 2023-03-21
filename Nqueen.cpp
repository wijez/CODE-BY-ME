#include<bits/stdc++.h>

using namespace std;
int  n , cnt = 0 ;
int X[100] , col[100] , d1[100] , d2[100] ;
int a[100][100] ;
void IN(){
  memset(a,0,sizeof(a));
  for(int i = 1 ; i <= n; i++){
    a[i][X[i]] = 1 ; 
  }
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
      cout << a[i][j] ;
    }
    cout << endl;
  }
     cout << endl;
}
void Try(int i){
  for(int j = 1; j <= n; j++){
    if( col[j] == 1 && d1[i-j+n] == 1 && d2[i+j-1] == 1)    {
      X[i] = j ;
      col[j] = d1[i - j + n] = d2[i + j - 1]  = 0 ;
      if(i == n){
        cnt++ ;
       // IN() ;
      }
      else{
        Try(i + 1) ;
        
      }
        col[j] = d1[i - j + n] = d2[i + j - 1]  = 1 ;
    }     
}
}
int main(){
  
  cin >> n ;
  for(int i = 1; i <= 99; i++){
    col[i] = d1[i] = d2[i] = 1 ;
  }
  Try(1) ;
  cout << cnt << endl ;
  return 0 ;
}