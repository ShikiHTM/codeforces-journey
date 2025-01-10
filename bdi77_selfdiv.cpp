#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)
#define name "SELFDIV"

bool check(ll x) {
	ll tmp = x;

	while(tmp) {
		ll a = tmp % 10;
		if(x % a != 0 || x % 10 == 0) return false;

		tmp /= 10;
	}

	return true;
}


int main() {
	buff;
#ifdef ONLINE_JUDGE
	freopen(name".INP", "r", stdin);
	freopen(name".OUT", "w", stdout);
#endif

	ll L, R; cin >> L >> R;
	ll ans = 0;

	for(ll i = L; i <= R; ++i) {
		if(check(i)) ans++;
	}
	cout << ans;
}
