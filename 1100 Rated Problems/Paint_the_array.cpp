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
        bool flag =false;
        //Calculate gcd of values at odd positions
        ll gcd_odd=arr[0];
        for(ll i=2;i<n;i+=2)
        {
            gcd_odd = __gcd(gcd_odd,arr[i]);
        }

        //Check if a value present at even position which is divisible by gcd_odd
        for(ll i=1;i<n;i+=2)
        {
            if(arr[i]%gcd_odd==0)
            {
               //cout<<0<<"\n";
               flag =true;
               break;
            }
        }
        if(!flag)
        {
            cout<<gcd_odd<<"\n";
            continue;
        }
        //Calculate gcd of values at even positions
        ll gcd_even = arr[1];
        if(flag)
        {
            flag=false;
            
            for(ll i=3; i<n; i+=2)
            {
                gcd_even = __gcd(gcd_even, arr[i]);
            }

            //Check if a value present at odd position which is divisible by gcd_even
            for(ll i=0;i<n;i+=2)
            {
                if(arr[i]%gcd_even==0)
                {
                    cout<<0<<"\n";
                    flag =true;
                    break;
                }
            }
        }

        if(!flag)
        {
            cout<<gcd_even<<"\n";
        }
        
    }
}