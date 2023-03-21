#include "bits/stdc++.h"
#define ll long long int
#define iPair pair<int, int>

#define MOD 1000000007
#define MN 100005

using namespace std;

vector<ll> vII;
vector<iPair> vP;
vector<ll> :: iterator it;
vector<iPair> :: iterator itP;

int main(){
	ll n = 5;
	for (int i = 0; i < n; i++){
		vII.push_back(i + 1);
		vP.push_back(make_pair(i, i));
	}
	cout << vII.size() << endl;
	
	for (it = vII.begin(); it != vII.end(); it++){
		cout << *it << " ";
	}
	cout << endl;
	
	for (itP = vP.begin(); itP != vP.end(); itP++){
		cout << itP->first << " -> " << itP -> second << endl;
	}
	return 0;
}
