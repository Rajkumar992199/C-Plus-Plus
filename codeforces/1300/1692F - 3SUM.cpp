#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n;
    
    vector<int> cnt(10, 0);
    bool ans = false;

    for(int i = 0; i < n; i++) {
        cin >> x;
        cnt[x % 10]++;
    }

    for (int a = 0; a < 10; a++) {
        for (int b = a; b < 10; b++) {
            for (int c = b; c < 10; c++) {
                if((a+b+c) % 10 == 3) {
                    if(a == b) {
                        if(b == c) {
                            if(cnt[a] > 2)
                                ans = true;
                        }
                        else
                            if(cnt[a] > 1 && cnt[c])
                                ans = true;
                    }
                    else if(b == c) {
                        if(cnt[a] && cnt[b] > 1)
                            ans = true;
                    }
                    else if(cnt[a] && cnt[b] && cnt[c])
                        ans = true;

                    if(ans) {
                        cout << "YES\n";
                        return;
                    }
                }
            }
        }
    }
    cout << "NO\n";
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