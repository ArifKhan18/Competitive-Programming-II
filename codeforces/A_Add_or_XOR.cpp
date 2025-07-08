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
	int a, b, x, y; cin >> a >> b >> x >> y;
	if (a == b) {
		cout << 0 << endl;
		return;
	}
	if (a > b) {
		if ((a - b == 1) and (a & 1)) {
			cout << y << endl;
		}
		else cout << -1 << endl;
	}
	else if (a < b) {
		if (x <= y) {
			ll ans = b - a;
			cout << ans*x << endl;
		}
		else {
			ll ans = 0;
			while (a != b) {
				if (a & 1) {
					a++;
					ans += x;
				}
				else {
					a ^= 1;
					ans += y;
				}
			}
			cout << ans << endl;
		}
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