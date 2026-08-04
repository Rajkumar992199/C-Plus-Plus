#include<bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int n = s.size(), m = t.size(), id1 = -1, id2 = -1, mn = INT_MAX;
    vector<int> idx1(26, -1), idx2(26, -1);
    for(int i = n - 1; i > 0; i--) 
        idx1[s[i] - 'a'] = i;

    for(int i = 0; i < m-1; i++) 
        idx2[t[i] - 'a'] = m - i - 1;

    for(int i = 0; i < 26; i++) {
        if(idx1[i] != -1 && idx2[i] != -1) {
            if(mn > idx1[i] + idx2[i]) {
                mn = idx1[i] + idx2[i];
                id1 = idx1[i];
                id2 = idx2[i];
            }
        }
    }

    string ans;
    if(id1 != -1) {
        for(int i = 0; i < id1; i++)
            ans += s[i];
        while(m - id2 - 1 < m) {
            ans += t[m - id2 - 1];
            id2--;
        }
    }
    else
        ans = "-1";
    cout << ans;

    return 0;
}