#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	buff;
	int n; cin >> n;
	ll oldPre = 0;

	while(n--) {
		ll x, y; cin >> x >> y;
		oldPre = max(x+y, oldPre);
	}
	cout<< oldPre;
}

