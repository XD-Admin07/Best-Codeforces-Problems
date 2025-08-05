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
        ll cnt_neg=0;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<0)
            {
                arr[i]=-arr[i];
                cnt_neg++;
            }
            sum+=arr[i];
        }
        if(cnt_neg&1)
        {
            sort(arr.begin(), arr.end());
             sum-=2*arr[0];
        }
        cout<<sum<<"\n";
    }
}