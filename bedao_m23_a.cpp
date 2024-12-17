#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	buff;
	int tt; cin >> tt;
	while(tt--) {
		string s; cin >> s;

		if(s.size() < 2) {
			cout << -1 << "\n";
			continue;
		}

		int n = s.size();
		s += '%';

		int flags = 1;
		for(int i = 0; i < n-1; ++i) {
			if(s[i] == s[i+1] || s[i] == s[i+2]) {
				cout << 0 << '\n';
				flags = 0;
				break;
			}
		}

		if(!flags) continue;
		cout << 1 << '\n';
	}
}
