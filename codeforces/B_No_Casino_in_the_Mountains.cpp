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
	int ans = 0;
	int i = 0;
	while (i < n) {
		if (v[i] == 1) {
			i++;
			continue;
		}
		int j = i;
		while (j < n and v[j] == 0) {
			j++;
		}
		ans += ((j - i) + 1) / (k + 1);
		i = j;
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