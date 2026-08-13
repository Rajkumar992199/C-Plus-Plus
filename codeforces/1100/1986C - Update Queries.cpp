#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, ind;
    string s, c;
    cin >> n >> m >> s;
    set<int> st;
    for(int i = 0; i < m; i++) {
        cin >> ind;
        st.insert(ind);
    }
    cin >> c;
    vector<int> cnt(26, 0);
    for(int i = 0; i < m; i++) 
        cnt[c[i] - 'a']++;

    int i = 0;
    for(auto it : st) {
        while(cnt[i] == 0)
            i++;
        s[it-1] = i + 'a';
        cnt[i]--;
    }

    cout << s << endl;
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