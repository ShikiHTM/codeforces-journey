#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int pref[100005];

int main() {
	buff;
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 1; i <= n; ++i) cin >> a[i];

	sort(a.begin()+1, a.begin()+1+n);
	int m = n>>1;

	pref[0] = 0;
	for(int i = 1; i <= n; ++i) pref[i] = pref[i-1] + a[i];
	ll w = pref[n] - pref[m], h = pref[m] - pref[0];
	cout << w*w + h*h;
}
