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
const ll mod = 1e9 + 7;
const ll mxn = 1e5 + 5;

void Plz_Ac() {
    ll n; cin >> n;
    string s; cin >> s;
    ll ans = 0;
    for (ll i = 1; i <= n; i++) {
        for (ll j = i; j <= n; j += i) {
            if (s[j - 1] == '0') {
                ans += i;
                s[j - 1] = 'x';
            }
            else if (s[j - 1] == 'x')continue;
            else break;
        }
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