/*
	https://codeforces.com/problemset/problem/177/A1
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)
vector<vector<int> > arr(105, vector<int>(105));

int main() {
	buff;

	int n; cin >> n;
	int ans = 0;
	for(int i = 1; i <= n; ++i) {
		for(int j = 1; j <= n; ++j) {
			cin >> arr[i][j];
		}
	}
	
	for(int i = 1; i <= n; ++i) {
		for(int j = 1; j <= n; ++j) {
			if(i == j || i == n/2+1 || j == n/2+1){
				ans += arr[i][j];
			}
		}
	}
	
	for(int i = 1; i <= n; ++i) {
		for(int j = n; j > 0; --j) {
			if(j==n-i+1 && j != n/2+1) {
				ans += arr[i][j];
			}
		}
	}
	
	cout << ans;
}
