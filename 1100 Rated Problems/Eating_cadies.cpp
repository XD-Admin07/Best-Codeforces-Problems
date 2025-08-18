#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> weight(n);
        for (auto &it : weight) cin >> it;

        // Prefix array
        vector<ll> prefix_sum(n);
        prefix_sum[0] = weight[0];
        for (int i = 1; i < n; i++)
            prefix_sum[i] = prefix_sum[i-1] + weight[i];

        // Suffix array
        vector<ll> suffix_sum(n);
        suffix_sum[n-1] = weight[n-1];
        for (int i = n-2; i >= 0; i--)
            suffix_sum[i] = suffix_sum[i+1] + weight[i];

        int mx_len = 0;
        int i = 0, j = n-1;

        while (i < j) {
            if (prefix_sum[i] == suffix_sum[j]) {
                int local_len = (i+1) + (n-j);
                mx_len = max(mx_len, local_len);
                i++;
                j--;
            } 
            else if (prefix_sum[i] > suffix_sum[j]) j--;
            else i++;
        }

        cout << mx_len << "\n";
    }
    return 0;
}
