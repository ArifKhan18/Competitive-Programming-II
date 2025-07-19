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
	ll n; cin >> n;
	vector<ll>v(n);
	for (auto &it : v)cin >> it;
	ll cost = LLONG_MAX;
	for (ll i = 0; i < n;) {
		ll x = v[i], j = i;
		while (i < n and v[i] == x) i++;
		cost = min(cost, (j * v[j]) + ((n - i) * v[j]));
	}
	cout << cost << endl;
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