/*
	https://codeforces.com/problemset/problem/214/A
*/


#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	buff;
	int n, m, ans = 0;
	cin >> n >> m;

	for(int i = 0; i <= m; ++i) {
		for(int j = 0; j <= n; ++j) {
			if(i + j*j == n && i*i + j == m) ans++;
		}
	}
	cout << ans;
}
