#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

const ll INF = 1e6;

typedef struct{
	int x, y, w;
}Point;

int compare(const Point a, const Point b) {
	return a.x < b.x;
}

Point point[INF];

int main() {
	buff;
	int n, q;
	cin >> n >> q;

	for(int i = 0; i < n; ++i) {
		cin >> point[i].x >> point[i].y >> point[i].w;
	}

	sort(point, point + n, compare);

	// while(q--) {
	// 	ll r; cin >> r;
	// 	ll ans = 0;
	// }
}
