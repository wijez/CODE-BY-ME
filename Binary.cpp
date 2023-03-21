#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std ;
string Format(string str){
  while(str.size() < 8 ){
    str = "0" + str ;
  }
  return str ;

}
int main(){
  string str ;
  cin >> str ;
  cout << Format(str) << endl ;
}
// định dạng chuỗi 