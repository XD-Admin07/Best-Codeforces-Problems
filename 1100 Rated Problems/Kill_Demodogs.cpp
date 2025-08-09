#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        
        ll ans = n % mod;
        ans = ans * ((n + 1) % mod) % mod;
        ans = ans * ((4 * n - 1) % mod) % mod;
        ans = ans * 337 % mod; // 337 = 2022 / 6 (modular division)
        
        ll sum = n*(n+1)*(4*n-1)/6*2022;
        sum%=mod;
        cout << sum << "\n";
    }
    return 0;
}