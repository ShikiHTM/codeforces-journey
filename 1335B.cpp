#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	buff;
	int iTest; cin >> iTest;
	while(iTest--) {
		int a, n ,b; cin >> n >> a >> b;

		for(int i = 0; i < n; ++i) {
			cout << char( 'a' + i%b );
		}

		cout << '\n';
	}
}
