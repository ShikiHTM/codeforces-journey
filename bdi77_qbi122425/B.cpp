#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int n;
vector<pair<ll, ll>> di(1000005);
ll preb[1000005], prea[1000005];

int compare(const pair<ll, ll>& a, const pair<ll, ll>& b) {
    return (a.first - a.second) > (b.first - b.second);
}

int main() {
	buff;
	//freopen("CHEF.INP", "r", stdin);
	//freopen("CHEF.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        cin >> di[i].first;
    }

    for(int j = 1; j <= n; ++j) {
        cin >> di[j].second;
    }

    for(int i = 1; i <= n; ++i) {
        prea[i] = prea[i-1] + di[i].first;
        preb[i] = preb[i-1] + di[i].second;
    }

    for(int i = 1; i <= n; ++i) {
        cout <<prea[n] - prea[n-i] + preb[n-i] << ' ';
    }
}
