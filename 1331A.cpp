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
        ll a, b, c, d, x, y, x1, y1, x2, y2;
        cin >> a >> b >> c >> d >> x >> y >> x1 >> y1 >> x2 >> y2;
        if ((x-min(1LL, a) >= x1 || x+min(1LL, b) <= x2) && (y-min(1LL, c) >= y1 || y+min(1LL, d) <= y2) && (x-a)+b >= x1 && x+(b-a) <= x2 && (y-c)+d >= y1 && y+(d-c) <= y2)
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}