#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
 
ll fun(int x, int h, int k) {
    if (k == 0) return x;
    else if (k == 1) return x-h;
    return x+h;
}
ll f(int i) {
    return i > 0;
}
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    ll a[n], h[n];
    for (int i = 0; i < n; i++) cin >> a[i] >> h[i];
    ll dp[3][n];
    dp[0][0] = 0; dp[1][0] = 1;
    if (n > 1 && a[0]+h[0] < a[1]) dp[2][0] = 1;
    else dp[2][0] = 0;
    for (int i = 1; i < n-1; i++) {
        for (int j = 0; j < 3; j++) {
            ll mon = -1;
            for (int k = 0; k < 3; k++) {
                if (j < 2) {
                    if (max(a[i-1], fun(a[i-1], h[i-1], k)) < min(a[i], fun(a[i], h[i], j)))
                        mon = max(mon, dp[k][i-1] + f(j));
                    else mon = max(mon, dp[k][i-1]);
                } else {
                    if (a[i]+h[i] < a[i+1] &&  max(a[i-1], fun(a[i-1], h[i-1], k)) < a[i])
                        mon = max(mon, dp[k][i-1] + 1);
                    else mon = max(mon, dp[k][i-1]);
                }
                dp[j][i] = mon;
            }
        }
    }
    if (n == 1) cout << "1";
    else cout << max(dp[0][n-2], max(dp[1][n-2], dp[2][n-2])) + 1 << "\n";
    return 0;
}