#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	buff;
	string s, t; cin >> s >> t;

	int w = 0;
	while(true) {
		int i = (int)s.size() - w - 1;
		int j = (int)t.size() - w - 1;

		if( i >= 0 && j >= 0 && s[i] == t[j] ) {
			w++;
		}
		else {
			break;
		}
	}

	cout<< s.size() + t.size() - 2 * w;
}
