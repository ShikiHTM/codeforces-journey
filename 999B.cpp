#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	buff;
	int n; cin >> n;
	string s; cin >> s;
	vector<int> div;
	for(int i = 2; i <= n; ++i) {
		if(n % i == 0) reverse(s.begin(), s.begin() + i);
	}

	cout << s;
}

