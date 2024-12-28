#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	buff;
	int iTest; cin >> iTest;
	while(iTest--) {
		int n; cin >> n;
		string s; cin >> s;
		
		int cnt = 0;
		int bal = 0;
		for(int i = 0; i < n; ++i) {
			if(s[i] == '(') bal++;
			else {
				bal--;
				if(bal < 0) {
					bal = 0;
					cnt++;
				}
			}
		}

		cout << cnt << '\n';
	}
}
