#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	buff;
	int c, n; cin >> c >> n;
	vector<int> a(n);
	for(int i = 1; i <= n; ++i) cin >> a[i];

	sort(a.begin() + 1, a.begin() + 1 + n, greater<int>());
	int ans = 0;
	for(int i = 0; i < n; ++i) {
		if(ans >= c) break;
		ans += a[i];
	}

	cout << ans;
}

