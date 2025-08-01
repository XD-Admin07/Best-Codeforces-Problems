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
        vector<ll>arr_b(n);
        for(auto& it : arr_b) cin>>it;
        ll first = -1;
        ll second = -1;
        for(int i=0;i<n;i++)
        {
             if(arr_a[i]!=arr_b[i])
             {
                if(first==-1)first=i;
                 else  second=i;
             }
            
        }
        ll i=first-1;

        while(i>=0)
        {
            if(arr_b[i]<=arr_b[i+1])i--;
            else break;
        }
        first = i+1;
        if(second==-1)second=n-1;
        ll j = second+1;
        while(j<n)
        {
            if(arr_b[j]>=arr_b[j-1])j++;
            else break;

        }
        second=j-1;

        cout << first+1<<" "<<second+1<<"\n";
    }
}
