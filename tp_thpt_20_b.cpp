#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)
int cnt[1000005];

int main() {
	buff;
	int n;cin >> n;
	for(int i = 1; i <= n; ++i) {
		int x; cin >> x;
		cnt[x]++;
	}

	int ans = INT_MIN;
	for(int i = 1; i <= 1000005; ++i) {
		ans = max(ans, cnt[i]);
	}

	cout << ans;
}
