#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

bool check(int sum, int n) {
	return sum * 10 >= n*45;
}

int main() {
	buff;
	int n, sum = 0; cin >> n;
	vector<int> g(n);
	for(auto &it: g) cin >> it, sum += it;

	sort(g.begin(), g.end());
	int ans = 0;
	while(!check(sum, n)) {
		sum += 5 - g[ans];
		ans++;
	}
	cout << ans;
}
