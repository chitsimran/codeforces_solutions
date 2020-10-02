#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, a, b, k, ans = 0, s = 0;
    cin >> n >> a >> b >> k;
    int arr[n], skips[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        int x = arr[i]%(a+b);
        if (x == 0) {
            x += b;
            skips[i] = ceil((float)x/a);
        } else {
            skips[i] = ceil((float)x/a) - 1;
        }
    }
    sort(skips, skips+n);
    for (int i = 0; i < n; i++) {
        if (skips[i] + s <= k) {
            ans++; s += skips[i];
        }
    }
    cout << ans;
    return 0;
}