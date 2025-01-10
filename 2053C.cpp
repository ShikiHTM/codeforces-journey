#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

ll ans = 0, n, k;

void solve() {
	cin >> n >> k;
	function<pair<ll, ll>> calc =[&](int l, int r) -> pair<ll, ll> {
		int size = r-l+1;

		if(size < k) return {0, 0};

		int mid = l+(r-l)/2;
		if(size&1) {
			auto ansL = calc(l, mid-1);
			int sum = mid;
			
		}
	}
	return;
}

int main() {
	buff;
	int iTest; cin >> iTest;
	while(iTest--) {
		solve();
	}
}
