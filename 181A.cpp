/*
	https://codeforces.com/problemset/problem/181/A
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	buff;

	int n, m;
	cin >> n >> m;
	char w[101][101];

	vector<int> row;
	vector<int> col;
	for(int i = 1; i <= n; ++i) {
		for(int j = 1; j <= m; ++j) {
			cin >> w[i][j];
		}
	}

	for(int i = 1; i <= n; ++i) {
		for(int j = 1; j <= m; ++j) {
			if(w[i][j] == '*') {
				row.push_back(i);
				col.push_back(j);
			}
			cout << '\n';
		}
	}

	int u_row = 0, u_col = 0;
	for(int i = 0; i < row.size(); ++i) {
		u_row ^= row[i];
	}

	for(int i = 0; i < row.size(); ++i) {
		u_col ^= col[i];
	}

	cout << u_row << ' ' << u_col;
}
