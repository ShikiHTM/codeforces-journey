#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

pair<int, int> ans;

int main() {
	buff;

	int n; ll k;
	cin >> n >> k;
	set<int> a;
	vector<int> am;
	map<int, int> idx;
	for(int i = 0; i < n; ++i) {
		int x; cin >> x;
		a.insert(x);
		am.push_back(x);
		idx[x] = i;
	};

	for(int i = 0; i < n; ++i) {
		int j = 2*k-am[i];
		if(a.count(j) != 0) {
			ans.first = i + 1;
		    ans.second = idx[j] + 1;
			break;
		};
	}

	cout << ans.first << ' ' << ans.second; 
}
