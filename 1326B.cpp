#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	buff;
	int n; cin >> n;
	vector<ll> b(n+5);

	ll x = 0;
	for(int i = 1; i <= n; ++i) {
		cin >> b[i];
		b[i] += x;
		x = max(x, b[i]);
		cout << b[i] << ' ';
	};
}
