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
        bool flag = true;
        ll n;
        cin >> n;
        vector<ll> ele(n);
        for (auto &it : ele)
            cin >> it;
        sort(ele.begin(), ele.end());
        vector<ll> pre(n);
        pre[0] = ele[0];
        for (int i = 1; i < n; i++)
        {
            pre[i] = pre[i - 1] + ele[i];
        }
        if (ele[0] != 1)
            flag = false;
        else
        {
            for (int i = 1; i < n; i++)
            {
                if ((pre[i] - pre[i - 1]) > pre[i - 1])
                {
                    flag = false;
                    break;
                }
            }
        }

        if (!flag)
            cout << "NO" << "\n";
        else
            cout << "YES" << "\n";
    }
}
