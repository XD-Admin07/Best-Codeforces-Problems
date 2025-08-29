#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        bool flag=false;
        ll n,k;
        cin>>n>>k;
        vector<ll>num(n);
        for(auto &it:num)cin>>it;
        unordered_map<ll,bool>mp;
        for(auto it:num) mp[it]=true;
        for(int i=0;i<n;i++)
        {
            if(mp.find(num[i]-k)!=mp.end())
            {
                cout<<"YES"<<"\n";
                flag=true;
                break;
            }
        }
        if(flag)continue;
        cout<<"NO"<<"\n";
        
    }
}