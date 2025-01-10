#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	buff;
	int n; cin >> n;
	vector<ll> a(n);
	unordered_map<ll, int> m;

	for(auto &it: a) cin >> it, m[it]++;
	
	ll ans = 0;
	for(auto it: m) {
		if(it.second < 2) {
			cout << -1;
			return 0;
		}
		ans += (it.second/3 + (it.second % 3 == 0 ? 0 : 1));
	}

	cout << ans;
}
