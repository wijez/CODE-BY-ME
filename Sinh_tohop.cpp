#include<bits/stdc++.h>
using namespace std;
int n , k , a[105] , ok ;
void Creat(){
  for(int i = 1 ; i <= k ; i++){
    a[i] = i ;
  }
}
void sinh(){
  int i =  k ;
  while(i >= 1 && a[i] == n - k + i){
    --i ;
  }
  if(i == 0){
    ok = 0 ;
  }
  else{
    a[i]++ ;
    for(int j = i + 1 ; j <= k ;++j){
      a[j] = a[j-1] + 1;
    }
  }

}
int main(){
  cin >> n >> k ; 
 string s[n+1] ; 
 for(int i=1;i<= n ; i++){
  cin >> s[i] ;
 }
 

  ok = 1 ;
  
  
  Creat() ;
  while(ok){
    // string s[n+1] = {"","viet","nam","dan","chu","hi"} ; 
    
    for(int i = 1 ; i <= k ; i++){
      cout <<s[a[i]] << " " ;
     // cout << a[i] ;
    }
     cout << "\n" ; 
      sinh() ;
  }
  return 0 ;
}