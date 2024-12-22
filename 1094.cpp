#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	buff;
	int n; cin >> n;
	ll mx = 0, ans = 0;

	for(int i = 1; i <= n; ++i) {
		ll x; cin >> x;
		mx = max(mx, x);
		ans += mx - x;
	}
	cout << ans;
}
