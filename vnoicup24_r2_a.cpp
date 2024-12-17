#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	buff;

	int iTest; cin >> iTest;
	while(iTest--) {
		ll n, x;
		cin >> n >> x;
		vector<ll> a(n);
		for(auto &x: a) cin >> x;

		sort(a.begin(), a.end());

		ll ans = 0;

		for(int i = 1; i <= n; ++i) {
			int pos = -1;
			for(int j = a.size() - 1; j >= 0; --j) {
				if(x >= a[j]/i) {
					pos = j;
					break;
				}
			}

			if(pos == -1) {
				break;
			}

			a.erase(a.begin() + pos);
			++ans;
		}
	}
}
