#include "bits/stdc++.h"
#define ll long long int
#define iPair pair<int, int>

#define MOD 1000000007
#define MN 100005

using namespace std;

struct cmp {
	bool operator() (iPair o1, iPair o2){
		if(o1.first > o2.first) return true;
		if(o1.first == o2.first){
			return o1.second > o2.second;
		}
		return false;
	}
};

priority_queue<iPair, vector<iPair>, cmp> pq;


int main(){
	pq.push(make_pair(11,2));
	pq.push(make_pair(2,2));
	pq.push(make_pair(3,2));
	pq.push(make_pair(3,3));
	pq.push(make_pair(2,2));
	
	while(!pq.empty()){
		iPair temp = pq.top();
		cout << temp.first << " " << temp.second << endl;
		pq.pop();
	}
	return 0;
}
