#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  
    int n;
    string s;
    cin >> n >> s;

    vector<bool> seen(60);
    int totalTypes = 0;

    for (int i = 0; i < n; i++) {
        char c = s[i];
        if (seen[c-'A'] == false) {
            seen[c-'A'] = true;
            totalTypes++;
        }
    }

    vector<int> cnt(60, 0);
    int typesInWindow = 0, left = 0, ans = n; 

    for (int right = 0; right < n; right++) {
        char r = s[right];
        cnt[r-'A']++;
        if (cnt[r-'A'] == 1) 
            typesInWindow++;  

        while (typesInWindow == totalTypes) {
            int windowLength = right-left+1;
            if (windowLength < ans) 
                ans = windowLength;

            char l = s[left];
            cnt[l-'A']--;
            if (cnt[l-'A'] == 0) 
                typesInWindow--;  

            left++;           
        }
    }

    cout << ans << endl;

    return 0;
}