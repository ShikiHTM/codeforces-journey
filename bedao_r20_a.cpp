#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

ll cntDiv(ll n) {
	int res = 0;
	if(n % 16 != 0) {
		return 0;
	}else {
		n /= 16;
		ll x = sqrt(n);

		if(x*x != n) return 0;
		else {
			for(ll i = 1; i*i <= x; ++i) {
				if(x % i == 0) {
					++res;
					if(i != x/i) ++res;
				};
			}
		}
	}

	return res;
}

int main() {
	buff;
	int iTest;cin >> iTest;
	while(iTest--) {
		ll n; cin >> n;
		cout << cntDiv(n) << '\n';	
	}
}
