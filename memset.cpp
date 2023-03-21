#include<bits/stdc++.h>
using namespace std;
int used[100] ;

int main(){
  int count = 0 ;
  memset(used, -1, sizeof(used));
  for(int i = 1 ; i <= 100  ; i++){
    count++ ;
    cout << " " << used[i]  ;
}
cout << count ;
return 0 ;
}