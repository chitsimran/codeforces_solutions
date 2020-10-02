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
        int n, mox = 0;
        cin >> n;
        int a[n];
        unordered_set<int> s;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            m[a[i]]++;
            s.insert(a[i]);
        }
        for (auto it = m.begin(); it != m.end(); it++)
            mox = max(mox, it->second);
        mox = min(mox, n/2 + 1);
        if (s.size() > mox)
            mox++;
        cout << min((int)s.size(), mox-1) << "\n";
    }
    return 0;
}