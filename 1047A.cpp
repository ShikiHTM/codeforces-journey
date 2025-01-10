#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	buff;
	ll n; cin >> n;
	if((n-2) % 3 != 0) cout << 1 << ' ' << 1 << ' ' << n-2;
	else cout << 1 << ' ' << 2 << ' ' << n-3;
}

