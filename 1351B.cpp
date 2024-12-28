/*
	https://codeforces.com/problemset/problem/1351/B
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

void sol() {
	int a1, a2, b1, b2;
	
	cin >> a1 >> b1 >> a2 >> b2;

	int height1 = max(a1, b1);
	int height2 = max(a2, b2);
	int width1 = min(a1, b1);
	int width2 = min(a2, b2);

	if(height1 != height2) {
		cout << "No\n";
		return;
	}

	if(width1 + width2 == height1) {
		cout << "Yes\n";
		return;
	}

	cout << "No\n";
	return;
}

int main() {
	buff;
	int iTest;cin >> iTest;
	while(iTest--) {
		sol();
	}
}
