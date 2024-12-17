#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

map<pair<ll, ll>, ll> mp;

pair<int, int> d[] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -2}, {0, -1}, {0, 0}, {0, 1}, {0, 2}, {1, -1}, {1, 0}, {1, 1}, {2, 0}};
pair<int, int> e[] = {{-2, 0}, {-1, -1}, {-1, 0}, {-1, 1}, {0, -2}, {0, -1}, {0, 0}, {0, 1}, {0, 2}, {1, -1}, {1, 0}, {1, 1}};

int main() {
	buff;
	int n; cin >> n;
	for(int i = 0; i < n; ++i) {
		ll u, v, w;
		cin >> u >> v >> w;
		mp[{u, v}] = w;
	}

	ll ans = 0;
	for(auto el: mp) {
		ll x = el.first.first, y = el.first.second;
		for(int i = 0; i < 12; ++i) {
			int u = x + e[i].first, v = y + e[i].second;
			ll sum = 0;
			for(int j = 0; j < 12; ++j) {
				int p = u + d[j].first, q = v + d[j].second;
				if(mp.find({p, q}) != mp.end()) {
					sum+= mp[{p, q}];
				}
			}
			ans = max(ans, sum);
		}
	}

	cout << ans;
}
