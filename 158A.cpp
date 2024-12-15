/*
	https://codeforces.com/problemset/problem/158/A
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	buff;

	int n, k;
	cin >> n >> k;
	int ans = 0;

	int score[n+5];

	for(int i = 1; i <= n; ++i ) {
		cin >> score[i];
	}

	for(int i = 1; i <= n; ++i ) {
		ans += (score[i] >= score[k] && score[i] > 0);
	}

	cout << ans;
}
