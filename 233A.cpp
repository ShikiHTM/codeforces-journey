/*
	https://codeforces.com/problemset/problem/233/A
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	buff;
	int n; cin >> n;
	if(n & 1) cout << -1;
	else {
		cout << 2 << ' ' << 1 << ' ';
		for(int i = n; i >= 3; i--) {
			cout << i << ' ';
		}
	}
}
