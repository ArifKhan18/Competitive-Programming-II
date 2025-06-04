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
    int n, a, b; cin >> n >> a >> b;
    if (((a + b) > n ) or (a == 0 and b > 0 ) or (b == 0 and a > 0)) {
        cout << "NO" << endl;
        return;
    }
    vector<int>p(n), q(n);
    if (a == 0 and b == 0) {
        for (int i = 0; i < n; i++) {
            p[i] = i + 1;
            q[i] = i + 1;
        }
        cout << "YES" << endl;
        for (auto it : p) {
            cout << it << " ";
        }
        cout << endl;
        for (auto it : q) {
            cout << it << " ";
        }
        cout << endl;
    }
    else {
        int tie = n - (a + b);
        int k = a + b;
        for (int i = 0; i < tie; i++) {
            p[i] = i + 1;
            q[i] = i + 1;
        }
        for (int i = 0; i < k; i++) {
            p[i + tie] = (tie + 1 + i);
            q[i + tie] = (tie + 1) + ((a + i) % k);
        }
        cout << "YES" << endl;
        for (auto it : p) {
            cout << it << " ";
        }
        cout << endl;
        for (auto it : q) {
            cout << it << " ";
        }
        cout << endl;

    }
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
