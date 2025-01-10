#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	buff;
	int n; cin >> n;
	ll c; cin >> c;
	vector<pair<ll, ll>> cre(n);

	for(auto &it: cre) cin >> it.first;
	for(auto &it: cre) cin >> it.second;

	sort(cre.begin(), cre.end(), [](const pair<ll, ll> &a, const pair<ll, ll> &b) {
		return a.second > b.second;	
	});

	ll ans = INT_MAX;

	for(int i = 1; i < n; ++i) {
		ans = min(ans, cre[i].first - cre[i-1].first);
	}

	cout << ans;
}
