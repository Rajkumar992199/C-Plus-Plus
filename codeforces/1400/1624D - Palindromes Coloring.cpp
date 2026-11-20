#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n, k;
    string s;
    cin >> n >> k >> s;

    vector<int> cnt(26);
    for (char c : s) 
        cnt[c - 'a']++;

    int pairs = 0, odd = 0;
    for (int c : cnt) {
        pairs += c / 2;
        odd += c % 2;
    }
	
    int ans = 2 * (pairs / k);
    odd += 2 * (pairs % k);
    if (odd >= k) 
        ans++;
    
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}