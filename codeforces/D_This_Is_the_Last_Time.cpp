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
const ll mod = 1e9 + 7;
const ll mxn = 1e5 + 5;


void Plz_Ac() {
	int n, k; cin >> n >> k;
	int ans = k;
	vector<pair<pair<int, int>, int>>vp;
	for (int i = 0; i < n; i++) {
		int a, b, c; cin >> a >> b >> c;
		vp.push_back({{a, b}, c});
	}
	sort(all(vp));
	for (auto [a, b] : vp) {
		if (a.first <= ans and ans <= a.second and b > ans)ans = b;
	}
	cout << ans << endl;
}

int main() {
	FastIo;
	int test = 1;
	cin >> test;
	while (test--) {
		Plz_Ac();
	}
	return 0;
}
