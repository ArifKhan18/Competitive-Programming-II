#include <bits/stdc++.h>
using namespace std;

using ll   =  long long;
using ull  =  unsigned long long;
using ld   =  long double;

#define endl            '\n'
#define all(x)          (x).begin(), (x).end()
#define rall(x)         (x).rbegin(), (x).rend()
#define point(x)        fixed << setprecision(x)
#define FastIo          ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define sz(x)           (int)x.size()

const ld pi = acos(-1);

void Plz_Ac() {
	int n; cin >> n;
	vector<int>v(n);
	ll total = 0;
	for (auto &it : v) {
		cin >> it;
		total += it;
	}
	ll ans = total;
	for (int mask = 0; mask < (1 << n); ++mask) {
		ll group = 0;
		for (int i = 0; i < n; i++) {
			if (mask & (1 << i)) {
				group += v[i];
			}
		}
		ll group2 = total - group;
		ans = min(ans, abs(group - group2));
	}
	cout << ans << endl;
}

int main() {
	FastIo;
	int test = 1;
	//cin >> test;
	while (test--) {
		Plz_Ac();
	}
	return 0;
}