#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vector<vector<int>> matrix(n, vector<int>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }
        ll diff_cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] != matrix[n - i - 1][n - j - 1]) {
                    diff_cnt++;
                }
            }
        }
        diff_cnt/=2;
        if(diff_cnt>k)cout<<"NO"<<"\n";
        else{
            ll temp=k-diff_cnt;
            if(temp%2==0)cout<<"YES"<<"\n";
            else{
                if(n%2==0)cout<<"NO"<<"\n";
                else cout<<"YES"<<"\n";
            }
        }

    }
}