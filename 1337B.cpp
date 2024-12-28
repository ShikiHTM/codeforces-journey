#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	buff;
	int iTest; cin >> iTest;
	while(iTest--) {
		int x, n, m; cin >> x >> n >> m;
		if(x <= 10 && m != 0) {
			cout << "YES\n";
			continue;
		}

		while(n--) {
			x = (x/2 + 10);
		}
		if(x - m*10 <= 0) cout << "YES\n";
		else cout << "NO\n";
	}
}
