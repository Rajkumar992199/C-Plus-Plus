#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, ans = 0, ptr = 0;
    string s;
    cin >> n >> s;
    vector<int> v;

    for(int i = n - 1; i >= 0; i--) {
        if(s[i] == '1')
            v.push_back(i + 1);
        else {
            if(ptr < v.size())
                ptr++;
            ans += i + 1;
        }
    }
    int itr = ptr + (v.size() - ptr) / 2;
    for(int i = itr; i < v.size(); i++)
        ans += v[i];

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) 
        solve();

    return 0;
}