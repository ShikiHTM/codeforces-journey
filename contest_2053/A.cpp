#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

bool check(int u, int v, int w) {
	return u + v > w && u + w > v && w + v > u;
}

int main() {
	buff;
	int iTest; cin >> iTest;
	while(iTest--) {
		int n; cin >> n;

		vector<int> a(n);
		for(auto &it: a) cin >> it;

		bool f = false;
		for(int i = 0; i < n - 2; ++i) {
			if(check(a[i], a[i+1], a[i+2])) {
				f = true;
				break;
			}
		}

		if(f) cout << "yes\n";
		else cout << "no\n";
	}
}
