#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	buff;
	ll l, r; cin >> l >> r;
	r /= l;
	int res = 1;
	int i = 2;
	while(i*i <= r) {
		if(r % i == 0) {
			r/=i;
			res++;
		}
		else i++;
	}

	res += (r > 1);

	cout << res;
}

