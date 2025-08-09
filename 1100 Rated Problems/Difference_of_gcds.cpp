#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;

int main() {
    ll t;
    cin >> t;
    
    while (t--) {
        ll n,l,r;
        cin >> n>>l>>r;
        vector<ll>store;
         bool flag=false;
        for(int i=1;i<=n;i++)
        {
            ll cil = ((i+l-1)/i)*i;
            store.push_back(cil);
            if(cil>r)
            {
                cout<<"NO"<<"\n";
                flag = true;
                break;
            }
        }
        if(flag)continue;
        else
        {
           cout<<"YES"<<"\n";
           for(auto&it:store)
           {
             cout<<it<<" ";
           }
           cout<<"\n";
        }

        
        
    }
    return 0;
}