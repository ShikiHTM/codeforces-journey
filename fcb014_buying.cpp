#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define buff ios_base::sync_with_stdio(0); cin.tie(0)

bool chosen[100005], selected[1000005];
int a[100005];

int main() {
	buff;
    int n, q; cin >> n >> q;

    memset(chosen, false, sizeof(chosen));
    memset(selected, false, sizeof(selected));

    for(int i = 1; i <= q; ++i) {
        cin >> a[i];
        chosen[a[i]] = true;
    }

    for(int i = q; i > 0; i--) {
        if(selected[a[i]] == false) {
            cout << a[i] << '\n';
            selected[a[i]] = true;
        }
    }
    for(int i = 1; i <= n; ++i) if(chosen[i] == false) cout << i << '\n';
}
