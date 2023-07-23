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
ll t, n, k;

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
		cin >> n >> k;
		ll out = 0;
		for(ll j = 0; j <= n / 2; j++) {
			vector<ll> temp;
			temp.push_back(n);
			temp.push_back(n - j);
			temp.push_back(j);
			
			bool ok = 0;
			if(k == 3) ok = 1;
			for(ll i = 3; i < k && !ok; i++) {
				temp.push_back(temp[i - 2] - temp[i - 1]);
				if(temp[i] > temp[i - 1] || temp[i] < 0) break;
				if(i == k - 1) ok = 1;
				if(temp[i] == 1) {
					if(i == k - 2) {
						if(temp[i - 1] == 1 || temp[i - 1] == 2) {
							ok = 1;
						} else break;
					} else if(i == k - 3) {
						if(temp[i - 1] == 2) {
							ok = 1;
						} else break;
					} else break;
				} 
			}
			if(ok) out++; 
		}
		cout << out << endl;

		
	} // end test cases
} // end main


