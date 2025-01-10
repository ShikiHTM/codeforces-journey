#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

ll F(ll x) {
	if(!(x & 1)) {
		return x / 2;
	}
	else return F(x-1) - x;
}

int main() {
	buff;
	int q; cin >> q;
	while(q--) {
		ll l , r; cin >> l >> r;

		cout << F(r) - F(l-1) << '\n';
	}
}

