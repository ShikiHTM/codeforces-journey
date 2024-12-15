/*
	https://codeforces.com/problemset/problem/231/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, ans = 0; cin >> n;
	while(n--) {
		int tmp = 0;
		for(int i = 0; i < 3; ++i) {
			int x; cin >> x;
			tmp += x;
		}
		ans += (tmp >= 2);
	}
	
	cout << ans;
}
