#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr_a(n), arr_b(n);
        for (auto &it : arr_a) cin >> it;
        for (auto &it : arr_b) cin >> it;

        sort(arr_a.begin(), arr_a.end());
        sort(arr_b.rbegin(), arr_b.rend());

        ll last = n - 1;
        ll ans = 1;

        for (ll i = 0; i < n; i++)
        {
            ll ind = upper_bound(arr_a.begin(), arr_a.end(), arr_b[i]) - arr_a.begin();
            ll ways = (last - ind + 1) - i;
            if (ways <= 0)
            {
                ans = 0;
                break;
            }
            ans = (ans * ways) % mod;
        }

        cout << ans << "\n";
    }
}
