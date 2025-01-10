#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	buff;
	int tc; cin >> tc;
	while(tc--) {
		int n; cin >> n;
		vector<int> a(n+5);
		pair<int, int> maxNum = {0, 0};
		for(int i = 1; i <= n; ++i) {
			cin >> a[i];
			if(a[i] > maxNum.first) {
				maxNum.first = a[i];
				maxNum.second = i;
			}
		}

		int l = 1, r = maxNum.second;
		int cnt = 0;
		while(l <= r) {
			if(a[l] < a[r]) {
				if(a[r] - a[l] == r - l) {
					cnt++;
					l++;
				}
				l++;
			}
			r--;
		}

		cout << cnt << '\n';
	}
}
