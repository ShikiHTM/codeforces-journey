#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

void solve() {
	int n; cin >> n;
	vector<int> a(n+5);
	for(int i = 1; i <= n; ++i) cin >> a[i];

	unordered_map<int, int> mp;
	for(int i = 1; i <= n; ++i) {
		for(int j = i; j <= n; ++j) {
			if(a[i] != a[j]) {
				mp[a[i] + a[j]]++;
			}
		}
	}

	int maxN = INT_MIN;
	for(auto it: mp) {
		maxN = max(maxN, it.second);
	}

	cout << maxN << '\n';
}

int main() {
	buff;
	int iTest; cin >> iTest;
	while(iTest--) {
		solve();
	}
}

