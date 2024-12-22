#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

ll gcd(int a, int b) {
    if(a == 0) return b;
    return gcd(b%a, a);
}

int main() {
	buff;
    int q; cin >> q;

    while(q--) {
        ll a, b; cin >> a >> b;
        ll g = gcd(a, b);
        ll x = a/g, y = b/g;
        if(x + y <= 0) cout << 0 << ' ' << 0 << '\n';
        else cout << x << ' ' << y << '\n';
    }
}