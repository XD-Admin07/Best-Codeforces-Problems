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
        for(auto&it:arr)cin>>it;

        ll i=0;
        while(i<n-1)
        {
            if(arr[i]<0)
            {
                ll left = (i-1>=0)?arr[i-1]:10e9;
                ll right = (i+1<n)?arr[i+1]:10e9;

                ll left_val =  (left<=abs(arr[i]))?(-left-arr[i]):0;
                ll right_val = (right<=abs(arr[i]))?(-right-arr[i]):0;
                
                if(left_val>right_val)
                {
                    arr[i]=-arr[i];
                    arr[i-1]=-arr[i-1];
                }
                else if(right_val>left_val)
                {
                    arr[i]=-arr[i];
                    arr[i+1]=-arr[i+1];
                }
            }

            i++;
        }
        ll sum=0;
        for(auto it:arr)sum+=it;
        cout<<sum<<"\n";

    }
}