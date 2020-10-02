#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, j = 0;
    cin >> n;
    int a[n];
    ll dp[4][n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n); dp[0][0] = dp[1][0] = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] == dp[0][j]) dp[1][j] += a[i];
        else { 
            j++;
            dp[0][j] = dp[1][j] = a[i];
        }
    }
    j++;
    dp[2][0] = dp[1][0]; dp[3][0] = 0;
    for (int i = 1; i < j; i++) {
        if (dp[0][i] == dp[0][i-1]+1) {
            dp[2][i] = dp[3][i-1]+dp[1][i];
            dp[3][i] = max(dp[2][i-1], dp[3][i-1]);
        } else {
            dp[2][i] = max(dp[2][i-1], dp[3][i-1]) + dp[1][i];
            dp[3][i] = max(dp[2][i-1], dp[3][i-1]);
        }
    }
    cout << max(*max_element(dp[2], dp[2]+j), *max_element(dp[3], dp[3]+j));
    return 0;
}