#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	buff;
	string s1, s2; cin >> s1 >> s2;
	string z;

	for(int i = 0; i < (int)s1.size(); ++i) {
		if(s1[i] == s2[i]) z.push_back('z');
		if(s1[i] > s2[i]) z.push_back(s2[i]);
	}

	if(z.size() == s1.size()) cout << z;
	else cout << -1;
}

