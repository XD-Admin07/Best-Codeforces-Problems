#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool check(vector<ll>arr, ll value)
{
    vector<ll>temp;
    for(auto it:arr)
    {
        if(it!=value)temp.push_back(it);
    }

    for(int i=0;i<temp.size();i++)
    {
        if(temp[i]!=temp[temp.size()-i-1])return false;
    }
    return true;
}
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
        bool flag=false;
       for(int i=0;i<n;i++)
       {
          if(arr[i]!=arr[n-i-1])
          {
              if(check(arr,arr[i]) || check(arr,arr[n-i-1]))
              {
                cout<<"YES"<<"\n";
                flag=true;
                break;
              }
              else
              {
                cout<<"NO"<<"\n";
                flag=true;
                break;
              } 
              
          }
       }
       if(flag)continue;
       cout<<"YES"<<"\n";

       
        
    }
}