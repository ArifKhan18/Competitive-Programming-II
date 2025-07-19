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
	vector<vector<int>>grid(n, vector<int>(n, 0));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			vector<bool>visit(2 * n + 9, 0);
			for (int y = 0; y < j; y++) {
				visit[grid[i][y]] = true;
			}
			for (int x = 0; x < i; x++) {
				visit[grid[x][j]] = true;
			}
			int mex = 0;
			while (visit[mex])mex++;
			grid[i][j] = mex;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << grid[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

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