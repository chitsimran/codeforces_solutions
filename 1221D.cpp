#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n], b[n];
        for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
        ll dp[3][n];
        dp[0][0] = 0; dp[1][0] = b[0]; dp[2][0] = 2LL*b[0];
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < 3; j++) {
                ll mox = 1e18;
                for (int k = 0; k < 3; k++) {
                    if (a[i]+j != a[i-1]+k) {
                        mox = min(mox, dp[k][i-1] + j*1LL*b[i]);
                    }
                }
                dp[j][i] = mox;
            }
        }
        cout << min({dp[0][n-1], dp[1][n-1], dp[2][n-1]}) << "\n";
    }
    return 0;
}