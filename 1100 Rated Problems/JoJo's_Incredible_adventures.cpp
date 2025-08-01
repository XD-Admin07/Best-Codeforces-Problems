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
       string s;
       cin>>s;
       ll global_longest =0;
       ll first=0;
       ll second=first;
       ll n=s.size();
       ll local_longest = 0;
       while(second<n)
       {
          
          if(s[second]!='1')
          {
            first=second+1;
            second=first;
            local_longest=0;
          }
          else
          {
             local_longest++;
             second++;
             global_longest=max(local_longest,global_longest);
          }

       }

       //cyclic part
       if(s[0]=='1' && s[n-1]=='1')
       {
          local_longest=0;
          ll i=0;
          ll j=n-1;
          while(i<j)
          {
            if(s[i]=='1')
            {
                local_longest++;
                i++;
            }
            else break;
          }
          
          while(j>=0)
          {
            if(s[j]=='1')
            {
                local_longest++;
                j--;
            }
            else break;
          }
          global_longest=max(global_longest,local_longest);

       }
       ll ans = (global_longest+1)/2*(global_longest+2)/2;
       cout<<ans<<"\n";
    }
}


