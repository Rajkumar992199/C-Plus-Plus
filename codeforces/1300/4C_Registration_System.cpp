#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> v(n);
    map<string, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mp[v[i]] = 0;
    }
    for (int i = 0; i < n; i++) {
        if(mp[v[i]] == 0) cout << "OK" << endl;
        else cout << v[i] << mp[v[i]] << endl;
        mp[v[i]]++;
    }
    return 0;
}