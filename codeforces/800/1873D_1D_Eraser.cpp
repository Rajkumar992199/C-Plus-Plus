#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--) {
        int n, k, ans = 0; // n is size of string, k is size of operation
        string s;
        cin >> n >> k >> s;
        for (int i = 0; i < n; i++) {
            if(s[i] == 'B') { 
                ans++;
                i = i + k - 1; // if B then next operation required on next kth index
            }
        }
        cout << ans << endl;
    }
    return 0;
}
