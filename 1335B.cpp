#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
 
char arr[26];
 
void make()
{
    for (int i = 0; i < 26; i++)
        arr[i] = 'a'+i;
}
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    make();
    while (t--) {
        int n, a, b, k = 25;
        cin >> n >> a >> b;
        string s;
        for (int i = 0; i < n; i++) s.push_back('a');
        for (int i = a-1; i >= 0; i--) {
            if (b) {
                s[i] = arr[k];
                if (--b) k--;
            } else {
                s[i] = arr[k];
            }
        }
        for (int i = a; i < n; i++)
            s[i] = s[i-a];
        cout << s << "\n";
    }
    return 0;
}