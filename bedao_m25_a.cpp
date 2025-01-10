#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)
const ll MOD = 1e9+7;

/*
6
11 2 4 59 43 12

(1,2) (1,3) (2,4) (3,4) (1,6) (2,5) (3,5) (5,6)
11 + 2 + 11 + 4 + 2 + 59 + 4 + 59 + 11 + 12 + 2 + 43 + 4 + 43 + 12 + 43
= 
*/

int main() {
	buff;
	ll n; cin >> n;
	vector<ll> dayle, daychan;
	for(int i = 1; i <= n; ++i) {
		ll x; cin >> x;
		if(x & 1) dayle.push_back(x);
		else daychan.push_back(x);
	}
	ll sumEven = 0, sumOdd = 0;
    for (ll x : daychan) {
        sumEven = (sumEven + x) % MOD;
    }
    for (ll x : dayle) {
        sumOdd = (sumOdd + x) % MOD;
    }

    // Calculate total weight
    ll evenCount = daychan.size();
    ll oddCount = dayle.size();
    ll weight = (sumOdd * evenCount % MOD + sumEven * oddCount % MOD) % MOD;
	
	cout << weight % MOD;
}
