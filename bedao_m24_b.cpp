#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)
int n, k;
ll xs, ys, xe, ye;
string s;
ll x_sum[1000005], y_sum[1000005];

bool pass() {
	ll x = xe - xs, y = ye - ys;
	for(int l = 1, r = k; r <= n; ++l, ++r) {
		int x_tmp = x_sum[l-1] + (x_sum[n] - x_sum[r]);
		int y_tmp = y_sum[l-1] + (y_sum[n] - y_sum[r]);
		if(abs(x-x_tmp) + abs(y-y_tmp) <= k) return true;
	}
	return false;
}

void solve(void) {
	cin >> n >> k;
	cin >> xs >> ys >> xe >> ye;
	cin >> s;
	s = ' ' + s;
	for(int i = 1; i <= n; ++i) {
		x_sum[i] = x_sum[i-1] + (s[i] == 'L' ? -1 : (s[i] == 'R' ? 1 : 0));
		y_sum[i] = y_sum[i-1] + (s[i] == 'U' ? -1 : (s[i] == 'D' ? 1 : 0));
	}
}

int main() {
	buff;
	int iTest; cin >> iTest;
	while(iTest--) {
		solve();
		cout << (pass() ? "YES" : "NO") << '\n';
	}
}

