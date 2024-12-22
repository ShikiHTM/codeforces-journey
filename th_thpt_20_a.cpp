#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	buff;
	freopen("CAU1.INP", "r", stdin);
	freopen("CAU1.OUT", "w", stdout);

	ll x, y; cin >> x >> y;
	ll ans = 0;
	for(int i = 1; i < __gcd(x, y); ++i) {
		if(__gcd(x, y) % i == 0) {
			ans++;
		}
	}

	cout << ans + 1;
}
