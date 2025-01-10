#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)
#define MOD 123456789

int main() {
	buff;
	int iTest; cin >> iTest;
	cin.ignore();
	while(iTest--) {
		string s; cin >> s;
		stack<char> q;
		ll ans = 0;
		int cur = 0, has = 0;

		for(int i = 0; i < (int)s.size(); i++) {
			if(isdigit(s[i])) {
				cur = s[i] - '0';
				has = 1;
			}else {
				if(has) {
					if(!q.empty()) {
						char op = q.top();
						q.pop();

						if(op == '-') ans -= cur % MOD;
						else if(op == '+') ans += cur %MOD;
						else if(op == '*') ans *= cur % MOD;
					}
					else {
						ans += cur % MOD;
					}
					cur = 0;
					has = 0;
				}
				q.push(s[i]);
			}
		}

		if(has) {
			if(!q.empty()) {
				char op = q.top();
				q.pop();

				if(op == '-') ans -= cur %MOD;
				else if(op == '+') ans += cur %MOD;
				else if(op == '*') ans *= cur %MOD;
			} else {
				ans += cur % MOD;
			}
		}

		cout << ans << '\n';
	}
}

