//  BÀI TOÁN NỐI DÂY 
// VD : 4 3 2 6 
// 2  + 3 = 5 ; 5 + 4 = 9 ; 6 + 9 =15 TỔNG CHI PHÍ LÀ NHỎ NHẤT = 29 
// 4 + 6 = 10 ; 3 + 10 = 13 ; 13 + 2 = 15 TỔNG CHI PHÍ LỚN NHẤT = 38 
#include<iostream>
#include<iomanip>
#include<deque>
#include<bits/stdc++.h>
// hàng đợi ưu tiên

using ll = long long  ;
using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    while(t--){
      cout << "BAI TOAN NOI DAY : " << endl ;
      int n ; 
      cin >> n ;
      int a[n] ;
      // truyen tham chieu nhap den phan tu thu n trong mang a 
         for( int &x : a) cin >> x ;
      priority_queue <int> pq ;
      // day phan tu cua mang  vao priority_queue 
      for( int x : a) pq.push(x) ;
      ll ans = 0 ;
      while( pq.size() >  1 ){
        ll top1 = pq.top() ; pq.pop() ;
        ll top2 = pq.top() ; pq.pop() ;
        ans += ( top1 + top2 ) ;
        pq.push(top1 + top2) ;
      }
      cout << ans << endl ; 
    }
    cout << setfill('-') << endl << setw(100)  ;
    // cout << "BAI TOAN TIM GIA TRI NHO NHAT CUA XAU : " << endl  ;
    // int k ; cin >> k ;
    // string s ; cin >> s ; 
    // map<char , int> mp ;
    // for(char &x : s){
    //   mp[x]++  ;
    // }
    // priority_queue <int> q ; 
    // for(auto it : mp){
    //   q.push(it.second) ;
    // }
    // while( k > 0 ){
    //   int top1 = q.top() ; q.pop() ;
    //   --top1 ; --k ; 
    //   q.push( max(top1,0)) ;
    // }
    //   ll ans = 0 ; 
    // while(! q.empty()){
    
    //   ans += 1ll * q.top() * q.top() ;
    //   q.pop() ;
    // }
    // cout << ans << endl ; 

    
    return 0 ;
}
