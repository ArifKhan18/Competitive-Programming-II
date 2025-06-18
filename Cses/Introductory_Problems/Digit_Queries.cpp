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

ll find_digit(ll k) {
	ll len = 1;
	ll cnt = 9;
	ll start = 1;

	while (k > len * cnt) {
		k -= len * cnt;
		len++;
		cnt *= 10;
		start *= 10;
	}

	ll num = start + (k - 1) / len;
	string stnum = to_string(num);
	ll digi = (k - 1) % len;
	return stnum[digi] - '0';
}

void Plz_Ac() {
	ll n; cin >> n;
	cout << find_digit(n) << endl;
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