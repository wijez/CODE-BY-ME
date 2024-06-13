#include "bits/stdc++.h"
#define ll long long int
#define MN 100005

using namespace std;
ll n;
ll a[MN];
ll f[MN];
ll res = INT_MIN;
/* 
7
-15 8 -2 1 0 6 -3 
*/
int main(){
	cin >> n;
	a[0] = 0;
	f[0] = INT_MIN;
	
	for (int i = 1; i <= n; i++){
		cin >> a[i];
	}	
	for (int i = 1; i <= n; i++){
		f[i] = max(a[i], f[i - 1] + a[i]);
	}
	for (int i = 0; i <= n; i++){
		res = max(res, f[i]);
	}
	cout << res;
	
	return 0;
}