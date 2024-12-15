/*
	https://codeforces.com/problemset/problem/236/A
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	buff;

	string s;
	cin >> s;

	set<char> sq;

	for(size_t i = 0; i < s.size(); ++i) {
		sq.insert(s[i]);
	}

	if(sq.size() & 1) {
		cout << "IGNORE HIM!";
	}
	else {
		cout << "CHAT WITH HER!";
	}
}
