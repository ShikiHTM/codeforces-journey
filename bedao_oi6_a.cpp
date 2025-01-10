#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

void solve(void) {
	int n, m; cin >> n >> m;
	if(n == m && n == 1) {
		cout << 1;
		return;
	}

	ll onceFlags = n*m*4;

	ll sameRowOrsameCol = n*m;

	ll diffRowAndCol = (n*m)/2 * 16;

	if(n == 1 || m == 1) {
		if(n == 1) sameRowOrsameCol = m*(m-1)/2;
		if(m == 1) sameRowOrsameCol = n*(n-1)/2;
		cout << onceFlags + sameRowOrsameCol;
	}
	else cout << onceFlags + sameRowOrsameCol + diffRowAndCol;
}

int main() {
	buff;
#ifdef ONLINE_JUDGE
	freopen("flagger.inp", "r", stdin);
	freopen("flagger.out", "w", stdout);
#endif
	solve();
}
