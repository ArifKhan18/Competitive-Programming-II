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
	int n, m; cin >> n >> m;
	vector<string>grid(n);
	vector<string>ans(n);
	for (int i = 0; i < n; i++) {
		cin >> grid[i];
		ans[i] = grid[i];
	}
	string even = "AB";
	string odd = "CD";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if ((i + j) % 2 == 0) {
				if (even[0] != grid[i][j])ans[i][j] = even[0];
				else ans[i][j] = even[1];
			}
			else {
				if (odd[0] != grid[i][j])ans[i][j] = odd[0];
				else ans[i][j] = odd[1];
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << ans[i] << endl;
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