#include<bits/stdc++.h>
using namespace std;

int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k, odd = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> freq(26, 0);
        for (int i = 0; i < n; i++) freq[s[i] - 'a']++;
        for (int i = 0; i < 26; i++)  odd += freq[i] % 2;
        if (odd > k + 1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}