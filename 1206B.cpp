#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	buff;
	srand(0);
	int n; cin >> n;
	ll ans = 0, neg=0, z = 0;
	vector<ll> d;
	for(int i = 1; i <= n; ++i) {
		ll x; cin >> x;
		if(x == -1) {
			neg++;
			continue;
		}
		if(x == 1) {
			continue;
		}
		if(x > 0) d.push_back(x-(x-1)), ans += (x-1);
		if(x < 0) d.push_back(x+(-1-x)), ans += (-1-x), neg++;
		if(x==0)d.push_back(x), z++;
	}

	for(int i = 0; i < z; ++i) {
		int x = rand() % (2 + 1 - 1) + 1;

		if(x == 1) {
			ans++;
			neg++;
		}if(x == 2) {
			ans++;
		}
	}

	if(neg & 1 && z == 0) ans += 2;
	cout << ans;
}
