#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	buff;

	int testCase; cin >> testCase;
	while(testCase--) {
		int n; cin >> n;
		vector<int> s(n);
		for(auto &x: s) cin >> x;

		sort(s.begin(), s.end());
		int ans = s[n-1] - s[0];

		for(int i = 0; i < n; ++i) {
			for(int j = i+1; j < n; ++j) {
				ans = min(ans, s[j] - s[i]);
			}
		}

		cout << ans << '\n';
	}
}
