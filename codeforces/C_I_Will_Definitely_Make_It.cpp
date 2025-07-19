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
	int n, k; cin >> n >> k;
	vector<int>v(n);
	for (auto &it : v)cin >> it;
	vector<pair<int, int>>vp;
	for (int i = 0; i < n; i++) {
		vp.push_back({v[i], i});
	}
	sort(all(vp));
	int myindex = k - 1;
	int myh = v[myindex];
	int t = 0;
	for (auto [a, b] : vp) {
		if (a <= myh) continue;
		int needt = abs(myh - a);
		t += needt;
		if (t > myh) {
			cout << "NO" << endl;
			return;
		}
		myh = a;
		myindex = b;
	}
	if (myh == vp[sz(vp) - 1].first) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
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