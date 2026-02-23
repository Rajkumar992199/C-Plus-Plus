#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int k;
    string s, ans;
    cin >> k >> s;
    map<char, int> mp;

    for(char c : s) {
        int i = c - 'a';
        mp[i]++;
    }

    for(auto it : mp) {
        if(it.second % k != 0) {
            cout << -1;
            return 0;
        }
        else {
            int count = it.second / k;
            for(int i = 0; i < count; i++)
                ans.push_back(it.first + 'a');
        }
    }
    
    for(int i = 0; i < k; i++)
        cout << ans;
}