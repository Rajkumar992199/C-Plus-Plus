#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
 
    vector<pair<pair<int, int>, bool>> v;
 
    for (int i = 0; i < n; i++) {
        bool swapped = false;
        int x, y;
        cin >> x >> y;
        if(x > y) {
            swap(x, y);
            swapped = true;
        }
        v.push_back({{x, y}, swapped});
    }
 
    sort(v.begin(), v.end());
 
    for (auto &p : v) {
        if(p.second == true)
            cout << p.first.second << " " << p.first.first << " ";
        else
            cout << p.first.first << " " << p.first.second << " ";
    }
    cout << "\n";
 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--) 
        solve();
 
    return 0;
}