/*
	https://codeforces.com/problemset/problem/1399/A
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

void sol() {
	int n; cin >> n;
	vector<int> a(n);
	for(int &it: a) cin >> it; 
	sort(a.begin(), a.end());
	for(int i = 1; i < n; ++i) {
		if(abs(a[i] - a[i-1]) > 1) {
			cout << "NO\n";
			return;
		}
	}

	cout << "YES\n";
}

int main() {
	buff;
	int iTest; cin >> iTest;
	while(iTest--) {
		sol();
	}
}
