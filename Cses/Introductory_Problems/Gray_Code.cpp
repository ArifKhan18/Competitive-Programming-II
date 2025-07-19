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
	int total = 1 << n;
	for (int i = 0; i < total; i++) {
		int g = i ^ (i >> 1);
		bitset<32>b(g);
		cout << b.to_string().substr(32 - n) << endl;
	}
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