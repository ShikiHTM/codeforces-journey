/*
	https://codeforces.com/problemset/problem/200/B
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	buff;

	int n, ans = 0;
	cin >> n;
	for(int i = 1; i <= n;++i) {
		int x; cin >> x;
		ans += x;
	}

	cout << ans/(float)n;
}
