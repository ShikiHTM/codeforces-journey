#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)
long long MOD = 1e9 + 7;

ll c[1000005], l[1000005], r[1000005];
ll mem[1000005];
int n;

// mem[i][j] contains value of cost from station i to station j

ll solv(ll g, ll cost = 0) {
    if(g > n) return 0;
    if(g == n) return cost;

    ll t_cost = 0;
    for(ll i = g + l[g]; i <= g + r[g]; ++i) {
        t_cost += solv(i, cost + c[g]);
        t_cost %= MOD;
    }

    return t_cost;
}


int main() {
    buff;
    #ifdef ONLINE_JUDGE
    freopen("METRO.INP", "r", stdin);
    freopen("METRO.OUT", "w", stdout);
    #endif

    cin >> n;
    ll maxF = 0;
    for(ll i = 1; i <= n; ++i) cin >> c[i], maxF = max(maxF, c[i]);
    for(ll i = 1; i <= n; ++i) {
        cin >> l[i] >> r[i];
    }
    memset(mem, 255, sizeof(mem));
    cout << solv(1) << endl;
}
