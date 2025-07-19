#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin >> n;

    while (1)
    {
        cout << n << ' ';
        if (n == 1 ) break;

        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = (n * 3) + 1;
        }
    }

}
int main()
{
    solve();
    return 0;
}
