#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin >> n;
    vector<ll>v;
    ll sum1 = 0;
    ll sum2 = 0;
    for (ll i = 1 ; i < n ; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    for (ll i = 0 ; i < (ll)v.size(); i++)
    {
        sum1 += v[i];
    }
    for (ll i = 1 ; i <= n; i++)
    {
        sum2 += i;
    }
    cout << sum2 - sum1 << endl;
}
int main()
{
    solve();
    return 0;
}
