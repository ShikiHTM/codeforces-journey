#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

#define bef first
#define compr second

int main() {
	buff;
	ll n, m; cin >> n >> m;
	pair<ll, ll> song[100005];
	for(int i = 1; i <= n; ++i) {
		cin >> song[i].bef >> song[i].compr;
	}

	ll sum_bef = 0, d[100005];
	for(int i = 1; i <= n; ++i) {
		sum_bef += song[i].bef;
		d[i] = song[i].bef - song[i].compr;
	}

	sort(d+1, d+1+n, greater<ll>());

	for(int i = 1; i <= n; ++i) {
		if(sum_bef <= m) {
			cout << i-1;
			return 0;
		}
		else {
			sum_bef -= d[i];
		}
	}

	if(sum_bef <= m) cout << n;
	else cout << -1;
}

