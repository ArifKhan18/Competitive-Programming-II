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
	string s; cin >> s;
	map<char, int>mp;
	for (auto it : s)mp[it]++;
	int odd = 0;
	for (auto [a, b] : mp)if (b & 1)odd++;
	if (odd > 1) {
		cout << "NO SOLUTION" << endl;
		return;
	}
	else {
		string ss = "";
		string st = "";
		bool f = 0;
		for (auto [a, b] : mp) {
			if (b % 2 == 0) {
				ss += string(b / 2, a);
			}
			else {
				f = 1;
				st = string(b, a);
			}
		}
		cout << ss;
		if (f) cout << st;
		reverse(all(ss));
		cout << ss << endl;
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