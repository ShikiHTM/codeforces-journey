#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	buff;
	int iTest; cin >> iTest;
	while(iTest--) {
		ll n; cin >> n;
		set<ll> mp;
		unordered_map<ll, ll> dem;

		for(ll i = 2; i*i <= n; ++i) {
			while(n % i == 0) {
				n /= i;
				dem[i]++;
				mp.insert(i);
			} 
		}

		if(mp.size() > 1) {
			cout << "Majin Buu\n";
			continue;
		}

		for(auto it: dem) {
			if(it.second < 2) {
				cout << "Majin Buu\n";
				break;
			}
		}
		cout << "Piccolo\n";
	}
}

