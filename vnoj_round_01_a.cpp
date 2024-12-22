#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

int n;
ll a[200005], pre[200005];

int main() {
	buff;
	cin >> n;
	for(int i=1; i <= n; ++i) cin >> a[i];

	pre[n+1] = 0;
	for(int i = n; i >= 1; --i) pre[i] = max(pre[i+1], a[i]);

	ll ans = 0;
	for(int i = 1; i <= n-2; ++i) {
		for(int j = i+1; j < n; ++j) {
			if(a[i]<a[j]&&a[j]<pre[j+1]){
				ans=max(ans,a[i]+a[j]+pre[j+1]);
			}
		}
	}

	cout << ans;
}
