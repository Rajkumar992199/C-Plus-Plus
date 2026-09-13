#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++) 
        cin >> a[i];

    string s;
    cin >> s;

    vector<int> blue, red;
    
    for(int i = 0; i < n; i++) {
        if(s[i] == 'B')
            blue.push_back(a[i]);
        else
            red.push_back(a[i]);
    }
    
    sort(blue.begin(), blue.end());
    sort(red.begin(), red.end());

    int num = 1;
    for(auto it : blue) {
        if(it >= num)
            num++;
        else {
            cout << "NO\n";
            return;
        }
    }
    for(auto it : red) {
        if(it <= num)
            num++;
        else {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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