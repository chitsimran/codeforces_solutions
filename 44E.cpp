#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int k, a, b;
    string str;
    cin >> k >> a >> b >> str;
    int n = str.length(), rem = n - k*a, curr = 0;
    if (k*a > n || b*k < n) {
        cout << "No solution";
        return 0;
    }
    for (int i = 0; i < k; i++) {
        int x = min(a+rem, b);
        rem -= x - a;
        cout << str.substr(curr, x) << "\n";
        curr += x;
    }
    return 0;
}