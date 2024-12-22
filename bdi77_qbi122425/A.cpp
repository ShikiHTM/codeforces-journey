#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	buff;
	freopen("CNUM.INP", "r", stdin);
	freopen("CNUM.OUT", "w", stdout);
	string s;
	getline(cin, s);
	int cnt = 0;
	for(int i = 0; i < s.size(); ++i) {
        if(isdigit(s[i])) cnt++;
	}
	cout << cnt;
}
