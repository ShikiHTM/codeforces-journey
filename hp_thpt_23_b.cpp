#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	cin.tie(0)->sync_with_stdio(0);
	string s; cin >> s;
	int cnt = 0;
	for(int i = 0; i < s.size(); ++i) {
		if(isdigit(s[i])) cnt++;
	}
	cout << cnt;
}
