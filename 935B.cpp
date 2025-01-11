#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	buff;
	int n ; cin >> n;
	string s; cin >> s;

	s = ' ' + s;
	int cnt = 0, x = 0, y = 0;
	for(int i = 1; i < n; ++i) {
		x += (s[i] == 'R' ? 1 : 0);
		y += (s[i] == 'U' ? 1 : 0);
		if(s[i] == s[i+1] && x == y) cnt++;
	}

	cout << cnt;
}

