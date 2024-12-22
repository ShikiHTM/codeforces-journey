#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

ll a[1000005], dp[1000005]{1};

int main() {
	buff;
	int n;cin >> n;
	for(int i = 1; i <= n; ++i) cin >> a[i];
	ll ans = 0;
	for(int i = 1; i <= n; ++i) {
		for(int j = 1; j <= n; ++j) if(a[i] > a[j]) dp[i] = max(dp[i], dp[j] + 1);
		ans = max(ans, dp[i]);
	}
	
	cout << ans;
}
