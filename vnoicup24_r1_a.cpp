#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	buff;

	int iTest; cin >> iTest;
	while(iTest--) {
		int n; cin >> n;
		vector<ll> a(n);
		for(auto &x: a) cin >> x;

		ll cnt1 = 0, cnt2 = 0;
		for(int i = 0; i < a.size(); ++i){
			if(a[i] == 1) cnt1++;
			else {
				cnt2++;
				cnt1 += a[i] - 2;
			}
		}

		cout << cnt1/2 + cnt2/2 << '\n';
	}
}
