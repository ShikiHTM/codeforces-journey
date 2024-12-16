/*
	https://codeforces.com/problemset/problem/1391/B
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	buff;
	int testCase; cin >>testCase;
	while(testCase--) {
		int n, m;
		cin >> n >> m;
		vector<vector<char>> grid(n+5, vector<char>(m+5));

		for(int i = 1; i <= n; ++i) {
			for(int j = 1; j <= m; ++j) {
				cin >> grid[i][j];
			}
		}

		int ans = 0;
		for(int i = 1; i <= n-1; ++i) {
			if(grid[i][m] != 'D') ans++;
		}
		for(int i = 1; i <= m-1; ++i) {
			if(grid[n][i] != 'R') ans++;
		}

		cout << ans << '\n';
	}
}
