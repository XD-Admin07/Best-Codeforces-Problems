#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, c;
        cin >> n >> c;
        vector<ll>arr(n);
        for(auto&it:arr)cin>>it;

        vector<ll>com_sum;
        for(int i=0;i<n;i++)
        {
             ll sum=(i+1)+arr[i];
             com_sum.push_back(sum);
        }

        sort(com_sum.begin(), com_sum.end());
        ll cnt=0;
        for(auto it:com_sum)
        {
             if(c>=it)
             {
                c-=it;
                cnt++;
             }
        }
        cout<<cnt<<"\n";
        

    }
}