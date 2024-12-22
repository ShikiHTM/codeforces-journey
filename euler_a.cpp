#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

vector<ll> a(1000005);
vector<ll> bit(1000005);
vector<int> num(1000005), tail(1000005);
vector<int> adj[1000005];
int dfsTime, n, q;

void update(int u, ll v) {
	int id = u;
	while(id <= n) {
		bit[id] += v;
		id += id & -id;
	}
}

ll get(int p) {
	ll ans = 0;
	while(p > 0) {
		ans += bit[p];
		p -= p & -p;
	}
	return ans;
}

void dfs(int u, int p = 0) {
	num[u] = ++dfsTime;
	update(num[u], a[u]);

	for(auto v: adj[u]) {
		if(v == p) continue;
		dfs(v, u);
	}
	tail[u] = dfsTime;
}

ll getRange(const int &l, const int &r) {
	return get(r) - get(l-1);
}

int main() {
	buff;
	cin >> n >> q;

	for(int i = 1 ;i <= n ;++i) {
		cin >> a[i];
	}

	for(int i = 1; i < n; ++i) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	dfs(1);

	while(q--) {
		int query; cin >> query;
		if(query == 2) {
			int s; cin >> s;
			cout << getRange(num[s], tail[s]) << '\n';
			continue;
		}

		int s, x; cin >> s >> x;
		update(num[s], x - a[s]);
		a[s] = x;
	}
}