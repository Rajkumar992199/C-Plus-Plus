#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n;

    vector<int> cnt(101, 0);

    for(int i = 0; i < n; i++) {
        cin >> x;
        cnt[x]++;
    }

    int mex1 = -1, mex2 = -1;
    for(int i = 0; i <= 100; i++) {
        if(cnt[i] == 0) {
            mex2 = i;
            if(mex1 == -1)
                mex1 = i;
            break;
        }
        else if(cnt[i] == 1 && mex1 == -1)
            mex1 = i;
    }
    cout << mex1 + mex2 << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}