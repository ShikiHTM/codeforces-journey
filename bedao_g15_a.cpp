#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int X[] = {-1, 0, 0, 1};
int Y[] = {0, -1, 1, 0};

int main() {
	buff;
	int n, m;
	cin >> n >> m;
	vector<vector<int>> grid(n, vector<int>(m));
	vector<vector<int>> n_grid(n, vector<int>(m));

	for(auto &row: grid) {
		for(auto &el: row) {
			cin >> el;
		}
	}

	for(int i = 1; i < n-1; ++i) {
		for(int j = 1; j < m-1; ++j) {
			int min_val = INT_MAX;
			if(grid[i][j] == 0) {
				for(int k = 0; k < 4; ++k) {
					if(grid[i+X[k]][j+Y[k]] == 0) {
						break;
					}
					min_val = min(min_val, grid[i+X[k]][j+Y[k]]);
				}
				n_grid[i][j] = min_val;
			}
		}
	}

	for(auto &row: n_grid) {
		for(auto &el: row) {
			cout << el << " ";
		}
		cout << "\n";
	}
}
