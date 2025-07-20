#include <bits/stdc++.h>
using namespace std;

using ll   =  long long;
using ull  =  unsigned long long;
using ld   =  long double;

#define nl            '\n'
#define all(x)          (x).begin(), (x).end()
#define rall(x)         (x).rbegin(), (x).rend()
#define point(x)        fixed << setprecision(x)
#define FastIo          ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define sz(x)           (int)x.size()

const ld pi = acos(-1);
const ll mod = 1e9 + 7;
const ll mxn = 1e5 + 5;

void Plz_Ac() {
    ll n, q; cin >> n >> q;
    vector<ll>v(n + 1), qq(q), mx(n + 1);
    for (int i = 1; i <= n; i++)cin >> v[i];
    for (int i = 0; i < q; i++)cin >> qq[i];
    vector<ll>pre(n + 1);
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            mx[i] = v[i];
            pre[i] = v[i];
        }
        else {
            mx[i] = max(mx[i - 1], v[i]);
            pre[i] = pre[i - 1] + v[i];
        }

    }
    for (auto it : qq) {
        auto ans = upper_bound(mx.begin() + 1, mx.begin() + n + 1, it) - (mx.begin() + 1);
        cout << pre[ans] << " ";
    }
    cout << endl;
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