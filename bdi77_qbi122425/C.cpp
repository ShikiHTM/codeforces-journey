#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

ll n, l;
ll a[1005], b[1005], c[1005], d[1005];

int main() {
    buff;
	#ifndef ONLINE_JUDGE
    //freopen("MATCH.INP", "r", stdin);
    //freopen("MATCH.OUT", "w", stdout);
	#endif // ONLINE_JUDGE

    cin >> n >> l;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    for(int i = 1; i <= n; ++i) cin >> b[i];
    for(int i = 1; i <= n; ++i) cin >> c[i];
    for(int i = 1; i <= n; ++i) cin >> d[i];
    unordered_map<ll, ll> s1;
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j) {
            s1[a[i] + b[j]]++;
        }
    }

    ll cnt = 0;
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j) {
            ll s2 = c[i] + d[j];
            if(s1.count(l - s2)) cnt += s1[l-s2];
        }
    }

    cout << cnt;
}
