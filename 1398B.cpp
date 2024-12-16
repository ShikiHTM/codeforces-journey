/*
	https://codeforces.com/problemset/problem/1398/B
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

bool compare(const string &s1, const string &s2) {
	return s1.size() > s2.size();
}

int main() {
	buff;

	int testCase; cin >>testCase;
	while(testCase--) {
		string s; cin >> s;
		vector<string> block;

		for(int i = 0; i < s.size(); i++) {
			string tmp = "";
			while(i < s.size() && s[i] == '1') {
				tmp += s[i];
				i++;
			}
			if(!tmp.empty()) {
				block.push_back(tmp);
			}
		}

		sort(block.begin(), block.end(), compare);

		int t = 1, ans = 0;
		for(auto x: block) {
			if(t & 1) ans += x.size();
			t++;
		}
		cout << ans << '\n';
	}
}
