#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)
#define name "COMB"

int main() {
	#ifdef ONLINE_JUDGE
	freopen(name".INP", "r", stdin);
	freopen(name".OUT", "w", stdout);
	#endif
	buff;
	int iTest; cin>> iTest;
	while(iTest--) {
		ll n, k; cin >> n >> k;

		if((k & (n-k)) == 0) cout << "ODD\n";
		else cout << "EVEN\n";
	}
}
