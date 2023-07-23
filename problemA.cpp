#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
typedef long long ll; 					
typedef unsigned long long ull; 
typedef long double ld;
#define inf 1000000000000000005
///////////////////////////////
ll t, n;
vector<ll> v;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL); 	

	// #ifndef ONLINE_JUDGDE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);	
	// #endif
	///////////////////////////////////////////////////////////////
	cin >> t;
	while(t--) {
		cin >> n;
		v.resize(n);
		ll out = 0;
		cin >> v[0];
		bool sorted = 1;
		ll index = -1;
		ll diff = inf;
		for(ll i = 1; i < n; i++) {
			cin >> v[i];
			if(v[i] < v[i - 1]) sorted = 0;
			if(v[i] - v[i - 1] < diff) {
				index = i - 1;
				diff = v[i] - v[i - 1];
			}
		}
		if(!sorted) {
			cout << 0 << endl; continue;
		}
		out = 1 + (v[index + 1] - v[index]) / 2;
		cout << out << endl;	
		
	} // end test cases
} // end main


