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
        vector<ll>arr(n);
        ll sum=0;
        for(auto&it:arr)
        {
            cin>>it;
            sum+=it;
        }

        ll gcd=1;
        ll left=0;
        for(ll i=0;i<n-1;i++)
        {  left+=arr[i];
            sum-=arr[i];
            gcd=max(gcd,__gcd(left,sum));
        }

        cout<<gcd<<"\n";
    }
}