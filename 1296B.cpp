#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	buff;
	int iTest;cin >> iTest;
	while(iTest--) {
		ll s, ans = 0; cin >> s;
		ll pw = 1000*1000*1000;
		while(s > 0) {
			while(s < pw) pw /= 10;
			ans += pw;
			s -= pw - pw / 10;
		}
		cout << ans << '\n';
	}
}
