#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int isPrime[10000006];

void sieve() {
	for(int i = 0; i <= 10000000; i++) isPrime[i] = 1;

	isPrime[0] = isPrime[1] = 0;

	for(int i = 2; i*i <= 10000000; ++i) {
		if(isPrime[i]) {
			for(int j = i*i; j <= 10000000; j+=i) isPrime[j] = 0;
		}
	}
}

int main() {
	buff;
	sieve();
	int n, m; cin >> n >> m;
   	vector<int> a(n+5), pref(n+5);
	pref[0] = 0;
	for(int i = 1; i <= n; ++i) cin >> a[i], pref[i] = pref[i-1] + a[i];

	while(m--) {
		int l, r; cin >> l >> r;
		if(isPrime[pref[r] - pref[l-1]]) cout << 1;
		else cout << 0;
		cout << '\n';
	}
}

