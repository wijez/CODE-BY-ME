#include<bits/stdc++.h>
using namespace std;
int quicksort(int a[] , int thap , int cao ){
  int left = thap ; 
  int right = cao - 1 ;
  int k = rand() % (right - left + 1) + left ;
  while(true){
    if(a[left] < right && a[left] < a[k]) left ++ ;
    if(a[right] > left && a[right] > a[k]) right -- ;
    if( left >= right) 
    swap(a[left] , a[right]) ;
    left++ ;
    right-- ;
  }
  swap(a[left] , a[right]) ;
  return left ;
}
void QS(int a[] , int thap , int cao){
  int index ;
  if(thap < cao){
     index = quicksort(a, thap, cao) ;
        QS(a,thap , index-1) ;
  QS(a, index + 1 , cao) ;
   
  }

}
int main(){
    int n = 7; 
   
    int a[n] = {3,6,5,4,1,2,9} ;
    int thap = 0 ; 
    int cao = n ;
    QS(a,thap ,cao) ;
    for(int i=0 ; i<n ; i++){
      cout << a[i] << " " ;
    }
    return 0 ;

}