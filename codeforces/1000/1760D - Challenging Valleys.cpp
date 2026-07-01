#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, cnt = 0, x;
    cin >> n;
    vector<long long> a;
    for(int i = 0; i < n; i++) { 
        cin >> x;
        if(a.empty() || a.back() != x)
            a.push_back(x);
    }


    for(int i = 0; i < a.size(); i++) 
        if((i == 0 || a[i-1] > a[i]) && (i == a.size() - 1 || a[i] < a[i+1]))
            cnt++;
    
    if(cnt == 1)
        cout << "YES\n";
    else 
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
