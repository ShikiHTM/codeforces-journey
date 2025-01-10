#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

// A and B do not exceed sqrt(k)
// A^2 + B^2 == k => A^2 = k - B^2

// 16 = 4^2

int main() {
	buff;
	ll k; cin >> k;
	int cnt = 0;
	for(ll i = 0; i*i < k; ++i) {
		ll tmp = k - i*i;
		tmp = sqrt(tmp);
		if(i*i + tmp*tmp == k) cnt++;
	}

	cout << cnt;
}

