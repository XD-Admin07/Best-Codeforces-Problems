#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
int main() {
    ll t;
    cin >> t;
    
    while (t--) {
        bool flag=false;
        string s;
        cin>>s;
        ll n = (ll)s.size();
        set<char>st;
        ll k;
        for(k=0;k<n;k++)
        {
            if(st.find(s[k])==st.end())
            {
                st.insert(s[k]);
            }
            else break;
        }

        for(ll i=k;i<n;i++)
        {
            if(s[i]!=s[i-k])
            {
                cout<<"NO"<<"\n";
                flag=true;
                break;
            }
        }
        if(flag)continue;
        cout<<"YES"<<"\n";
        
        

    }
    return 0;
}