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
  ll n; cin >> n;
  ll ans = (n * (n + 1)) / 2;
  vector<int>v, v2;
  ll va = ans / 2;
  vector<bool>ch(n + 1, false);
  while (va != 0) {
    for (int i = n; i >= 1; i--) {
      if (!ch[i] and (va - i) >= 0) {
        va -= i;
        ch[i] = true;
        v.push_back(i);
      }
    }
  }
  for (int i = n; i >= 1; i--) {
    if (!ch[i]) {
      v2.push_back(i);
    }
  }
  if ((ans & 1))cout << "NO" << endl;
  else {
    cout << "YES" << endl;
    cout << sz(v) << endl;
    for (auto it : v) {
      cout << it << " ";
    }
    cout << endl;
    cout << sz(v2) << endl;
    for (auto it : v2) {
      cout << it << " ";
    }
    cout << endl;
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