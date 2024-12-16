/*
	https://codeforces.com/problemset/problem/1399/B
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

ll max(const ll a, const ll b) {
	return a < b ? b : a;
}

int main() {
	buff;
	int testCase; cin >> testCase;
	while(testCase--) {
		int n; cin >> n;
		ll ans = 0;
		vector<ll> a(n), b(n);

		for(int i = 0; i < n; ++i) cin >> a[i];
		for(int i = 0; i < n; ++i) cin >> b[i];

		ll minA = *min_element(a.begin(), a.end());
		ll minB = *min_element(b.begin(), b.end());

		for(int i = 0; i < n; ++i) {
			ans += max(a[i] - minA, b[i] - minB);
		}

		cout << ans << '\n';
	}
}
