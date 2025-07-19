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
    cout << "YES" << endl;
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 1; i <= b; i++) {
        cout << i + a << " ";
    }
    for (int i = 1; i <= a; i++) {
        cout << i << " ";
    }
    for (int i = a + b + 1; i <= n; i++) {
        cout << i << " ";
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
