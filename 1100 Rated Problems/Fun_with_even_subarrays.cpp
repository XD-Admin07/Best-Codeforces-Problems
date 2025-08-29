#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>arr(n);
        for(auto&it:arr)cin>>it;
        ll ans=0;
        int i = n-1;

        while(i>=0 && arr[i]==arr[n-1])
        {
            i--;
        }
        if(i==-1)
        {
            cout<<0<<"\n";
            continue;
        }
        while(i>=0)
        {
            i-=(n-1-i);
            ans++;
            while(i>=0 && arr[i]==arr[n-1])
            {
                i--;
            }
            
        }
        cout<<ans<<"\n";

        
    }
} 