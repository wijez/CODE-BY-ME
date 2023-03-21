// tìm chỉ số của phân số lớn nhất
#include<iostream>
#include<vector>
using namespace std ;
int maxFraction( vector  <int> numerator , vector <int> denominators){
  int cs = 0 ;
  for(int i = 1 ; i < numerator.size() ; i++){
    if(numerator[cs] * denominators[i] < numerator[i] * denominators[cs]){
      cs = i ;
    }
  }
  return cs ;
}
void inin(){
  for(int i = 1; i <= n ; i++){
    for(int j = 0 ; j< numerator.size() ; i++){
      cin >> numerator[i][j] ;
    }
  }
}

int main(){
  int n , m;
  cin >> n >>  m;
   vector<int> numerator(n) ;
  
   vector<int> denomirators(m) ; 
  
  inin() ;

  maxFraction(numerator,denomirators) ;
  return 0 ;
  
}