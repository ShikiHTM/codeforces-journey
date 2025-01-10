#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	buff;
	ll n, m; cin >> n >> m;
	vector<pair<ll, ll>> a(n+5);
	for(ll i = 0 ; i < n; ++i) cin >> a[i].first, a[i].second = i+1;
	vector<pair<ll, ll>> tmp = a;
	sort(tmp.begin(), tmp.begin() + n);

	while(m--) {
		ll L, R; cin >> L >> R;
		L--, R--;
		ll cnt = 0;
		for(ll i = L; i <= R; ++i) {
			auto x = lower_bound(tmp.begin() + L - 1, tmp.begin() + R, make_pair(a[i].first, LLONG_MIN));
			if(x != tmp.end() && x->first == a[i].first) {
				cout << x->second << ' ' << a[i].second << '\n';
				break;
			}
		}

		//cout << (cnt == 0 ? -1 : cnt) << '\n';
	}
}
