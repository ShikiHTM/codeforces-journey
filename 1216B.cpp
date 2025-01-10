#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	buff;
	int n; cin >> n;
	vector<int> a(n);

	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	ll ret = 0;

	vector<int> trace;
	for(int i = 0; i < n; ++i) {
		int pos = -1;
		for(int j = 0; j < n; ++j) {
			if(pos == -1 || a[j] > a[pos]) pos = j;
		}

		trace.push_back(pos+1);

		ret += i * a[pos] + 1;
		a[pos] = 0;
	}

	cout << ret <<'\n';
	for(auto it: trace) cout << it << ' ';
}

