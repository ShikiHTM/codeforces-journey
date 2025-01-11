#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	buff;
	int n;cin >> n;
	string s; cin >> s;
	deque<char> d;
	s = ' ' + s;

	int i = 1;
	while(n) {
		if(n & 1) {
			d.push_back(s[i]);
			n--;
		}
		else {
			d.push_front(s[i]);
			n--;
		}
		i++;
	}

	for(auto it: d) cout << it;
}

