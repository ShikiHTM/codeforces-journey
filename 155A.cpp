/*
	https://codeforces.com/problemset/problem/155/A
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	buff;
	int n; cin >> n;
	vector<int> m(n);
	cin >> m[0];
	int minS = m[0], maxS = m[0];
	int cnt = 0;

	for(int i = 1; i < n; ++i) {
		cin >> m[i];

		if(m[i] > maxS) {
			cnt++;
			maxS = m[i];
		}
		else if(m[i] < minS) {
			cnt++;
			minS = m[i];
		}
	}

	cout << cnt;
}
