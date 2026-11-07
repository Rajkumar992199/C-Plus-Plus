#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  
    int n;
    cin >> n;
    
    vector<int> t(n);

    for(int i = 0; i < n; i++)
        cin >> t[i];

    sort(t.begin(), t.end());

    long long sum = 0;
    int ans = 0;

    for(auto it : t) {
        if(sum <= it) {
            sum += it;
            ans++;
        }
    }

    cout << ans << '\n';

    return 0;
}