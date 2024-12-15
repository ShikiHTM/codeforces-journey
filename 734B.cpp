/*
	https://codeforces.com/problemset/problem/734/B
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	buff;
	int k2, k3, k5, k6;
	cin >> k2 >> k3 >> k5 >> k6;
	
	int ans = 0;
	while(k2 != 0 && k5 != 0 && k6 != 0) {
		ans += 256;
		k2--,k5--,k6--;
	}
	
	while(k2 != 0 && k3 != 0) {
		ans += 32;
		k2--,k3--;
	}

	cout << ans;
}
