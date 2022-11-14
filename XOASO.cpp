#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll t, n, i, dem, l, c;
int main()
{
    freopen("XOASO.INP", "r", stdin);
    freopen("XOASO.OUT", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    ll a[n + 5];
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
        t += a[i];
        if (abs(a[i]) % 2 == 0)
        {
            c++;
        }
        else
        {
            l++;
        }
    }
    if (t % 2 != 0)
    {
        cout << c * l;
    }
    else
    {
        cout << (c * (c - 1) / 2) + (l * (l - 1) / 2);
    }
    return 0;
}
