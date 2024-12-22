#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

vector<ll> a(305);
ll mem[305][305][150];
ll cost(int l, int r) {
	return abs(a[l]-a[r]);
}

ll backtrack(int l, int r, int k) {
	if(k == 0) return 0;
	if(l > r) return -1e14;
	ll &f=mem[l][r][k];
	if(f != -1) return f;
	f=max(backtrack(l+1,r,k),backtrack(l,r-1,k));
	if(l + 1 <= r) {
		f = max(f, backtrack(l+2,r,k-1) + cost(l,l+1));
		f = max(f, backtrack(l,r-2,k-1) + cost(r,r-1));
		f = max(f, backtrack(l+1,r-1,k-1) + cost(r, l));
	}

	return f;
}

int main() {
	buff;
	int n, k; cin >> n >> k;
	for(int i = 1; i <= n; ++i) {
		cin >> a[i];
	}

	memset(mem, 255, sizeof(mem));
	cout << backtrack(1, 6, k);
}
