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
	string s = "0123456789";
	ll k; cin >> k;
	ll ans = k % 10;
	cout << s[ans] << endl;
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