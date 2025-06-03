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
void rec(int n, int from, int to, int mid) {
	if (n == 1) {
		cout << from << " " << to << endl;
		return;
	}
	rec(n - 1, from, mid, to);
	cout << from << " " << to << endl;
	rec(n - 1, mid, to, from);
}
void Plz_Ac() {
	int n; cin >> n;
	cout << (1 << n) - 1 << endl;
	rec(n, 1, 3, 2);
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