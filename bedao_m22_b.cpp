#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	buff;
	int n; cin >> n;
	vector<ll> a(n);
	ll ans = 0;
	ll mp[100005];
	for(int i = 0 ; i < n; ++i) {
		cin >> a[i];
		a[i] = a[i] % 23;
		// cout << a[i] << ' ';
	}

	// cout << '\n';

	for(int i = 0; i < n; ++i) {
		if(i > 5) {
			// cout << i << ' ' << i-6 << '\n';
			// cout << a[i] << ' ' << a[i-6] <<'\n';
			// cout << '\n';
			mp[a[i-6]]++;
		}

		ans += mp[a[i]];
		// cout << ans << '\n';
	}
	cout << ans;
}
