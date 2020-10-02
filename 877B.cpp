#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s;
    cin >> s;
    int n = s.length(), a[n+1], b[n+1], len = -1;
    a[0] = b[0] = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'a') {
            a[i+1] = a[i]+1;
            b[i+1] = b[i];
        } else {
            a[i+1] = a[i];
            b[i+1] = b[i]+1;
        }
    }
    for (int i = 0; i <= n; i++) {
        for (int j = n; j >= i; j--) {
            int x = a[i] + (a[n] - a[j]) + (b[j]-b[i]);
            len = max(len, x);
        }
    }
    cout << len;
    return 0;
}