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
        vector<ll> arr_a(n);
        for (auto &it : arr_a) cin >> it;
        ll ans=0;
        for(int i=0;i<n;i++)
        {
              ans= gcd(ans,abs(arr_a[i]-arr_a[n-i-1]));
        }
 
       
        cout << ans << "\n";
    }
}