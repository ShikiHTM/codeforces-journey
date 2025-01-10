#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	buff;
	ll n, k; cin >> n >> k;

	ll l = max(1LL, k-n);
	ll r = min(n, k-1);
	ll ans = max(0LL, (r-l+1)/2);

	cout << ans;
}

