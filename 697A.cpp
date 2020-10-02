#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t, s, x;
    cin >> t >> s >> x;
    x -= t;
    if (x == 0 || (x/s > 0 && (x%s == 0 || (x-1)%s == 0)))
        cout << "YES\n";
    else cout << "NO\n";
    return 0;
}