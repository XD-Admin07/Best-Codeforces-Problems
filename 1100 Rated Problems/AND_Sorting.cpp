#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;

int main() {
    ll t;
    cin >> t;
    
    while (t--) {
        ll n;
        cin>>n;
        ll ans = (1<<30)-1;
        for(ll i =0;i<n;++i)
        {
            ll x;
            cin>>x;
            if(x!=i)
            {
                ans&=x;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}