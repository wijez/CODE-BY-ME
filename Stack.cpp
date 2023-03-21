#include "bits/stdc++.h"
#define ll long long int
#define MOD 1000000007
#define MN 100005

using namespace std;
stack<ll> st;

int main(){
	cout << st.empty() << endl;
	for (int i = 0; i < 4; i++){
		st.push(i);
	}
	cout << st.size() << endl;
	while(!st.empty()){
		cout << st.top() << " ";
		st.pop();
	}
	return 0;
}
