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

string s[8];
int ans = 0;
bool col[8], dia1[16], dia2[16];

void backtrack(int row) {
	if (row == 8) {
		ans++;
		return;
	}
	for (int c = 0; c < 8; c++) {
		if (s[row][c] == '.' and !col[c] and !dia1[row + c] and !dia2[row - c + 7]) {
			col[c] = dia1[row + c] = dia2[row - c + 7] = true;
			backtrack(row + 1);
			col[c] = dia1[row + c] = dia2[row - c + 7] = false;
		}
	}
}

void Plz_Ac() {

	for (int i = 0; i < 8; i++)cin >> s[i];
	backtrack(0);
	cout << ans << endl;
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