/*
	https://codeforces.com/problemset/problem/228/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	set<int> q;
	for(int i = 1; i <= 4; ++i) {
		int x; cin >> x;
		q.insert(x);
	}

	cout << 4 - q.size();
}
