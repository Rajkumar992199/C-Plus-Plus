#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m, a;
    cin >> n >> m;
    vector<string> v(2 * m);
    string s;
    for (int i = 0; i < 2 * m; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> s;
        a = find(v.begin(), v.end(), s) - v.begin();
        if (v[a].size() > v[a + 1].size()) cout << v[a + 1] << " ";
        else cout << v[a] << " ";
    }
    return 0;
}